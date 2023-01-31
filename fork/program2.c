#include <fcntl.h>              /* Obtain O_* constant definitions */
#include <unistd.h>
#include <sys/types.h>
 #include <sys/stat.h>
 #include<stdio.h>
 int main()
 {
    unsigned char buff[128];
    ssize_t bytes1;
    int fd;
    fd=open("desdfile",O_RDONLY);
    bytes1=read(fd,buff,128);
    printf("%s\n",buff);
    close(fd);
 }