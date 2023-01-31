#include<stdio.h>
#include <unistd.h>         
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc,char const *argv[])
{
    int fd=0;
    unsigned char buff[128];
    ssize_t bytes;
    fd=open("desdfifo",O_RDONLY);
    bytes=read(fd,buff,sizeof(buff));
    printf("%s\n",buff);
    close(fd);
    return 0;
 }