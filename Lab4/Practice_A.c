#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int fd;
char buffer[500];
static char message [] = "\n Name = Anoushah Wasif \n Father's Name = Wasif Shahzad \n Program = BSCS \n Reg-no = 0009 ";
fd = open("Uni_Info.txt" , O_RDWR);
if (fd!= -1)
{
  printf("Uni_Info opened for read/write access \n");
  write(fd, message, sizeof(message));
  lseek(fd,0,0); 
  read(fd, buffer, sizeof(message));
  printf(" %s was written to Uni_Info \n", buffer);
  close(fd);
}
else
{
  printf("Error in opening Uni_Info \n");
}
}
