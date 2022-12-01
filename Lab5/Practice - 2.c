#include <stdio.h>
#include <sys/stat.h>

int main()
{
    struct stat st;
    const char *file = "Lab_Task02";
    stat(file, &st);

    // Display stats
    printf("File name: %s\n", file);
    printf("Size: %d\n", st.st_size);
}
