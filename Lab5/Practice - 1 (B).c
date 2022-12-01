#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/sendfile.h>


int main()
{
    int fd1, fd2;
    const char *file1 = "Lab_Task01";
    const char *file2 = "Lab_Task02";
    const char text[] = "We are writing data inside a file with Write command";
    // Create a text file named "Lab_Task01"
    if (creat(file1, 0666) == -1)
    {
        fprintf(stderr, "Error creating %s\n", file1);
        return 1;
    }

    // Open "LAB04_ONE" in read-write mode
    if ((fd1 = open(file1, O_RDWR)) == -1)
    {
        fprintf(stderr, "Error opening %s in read-write mode\n", file1);
        return 2;
    }

    // Write text into file
    write(fd1, text, sizeof(text));
    lseek(fd1, 0, SEEK_SET);

    // Create another file "Lab_Task02"
    if (creat(file2, 0666) == -1)
    {
        fprintf(stderr, "Error creating %s\n", file2);
        return 1;
    }

    // Open "Lab_Task02" in write mode
    if ((fd2 = open(file2, O_WRONLY)) == -1)
    {
        fprintf(stderr, "Error opening %s in write mode\n", file2);
        return 2;
    }

    // Use sndfile to write content in "Lab_Task01" into "Lab_Task02"
    sendfile(fd2, fd1, NULL, sizeof(text));

    // Close the files
    close(fd1);
    close(fd2);
}
