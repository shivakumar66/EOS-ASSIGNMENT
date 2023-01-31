 #include <fcntl.h>              /* Obtain O_* constant definitions */
#include <unistd.h>
#include <sys/types.h>
 #include <sys/stat.h>
 #include<stdio.h>
 int main()
 {
    int fd;
     ssize_t bytes;
    fd=open("desdfile",O_WRONLY);
    bytes=write(fd,"hello sir\n",10);
    close(fd);

 }