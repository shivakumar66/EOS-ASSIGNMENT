#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc,char const *argv[])
{

    ssize_t n_bytes;
    unsigned char buff[128];
    int fd;
    fd=open("desd.txt",O_WRONLY, S_IRUSR | S_IWUSR);
      if(fd == -1)
    {
        perror("Error");
    }
    write(fd,"shiva",5);
    close(fd);
     fd=open("desd.txt",O_RDONLY, S_IRUSR | S_IWUSR);
      if(fd == -1)
    {
        perror("Error");
    }
    n_bytes=read(fd,buff,128);
    printf("reads %lu\n string %s\n %d\n",n_bytes,buff,fd);
    close(fd);
    return 0;
}