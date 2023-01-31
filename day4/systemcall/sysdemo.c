#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc,char const *argv[])
{
    int fd;
    unsigned char buff[128];
    ssize_t n_bytes;

    //fd=open("desd.txt",O_WRONLY, S_IRUSR |  S_IWUSR);
     fd=open("desd.txt",O_RDONLY, S_IRUSR |  S_IWUSR);
    if(fd == -1)
    {
        perror("Error");
    }
    //write(fd,"hello desd\n",11);
    n_bytes = read(fd,buff,128);
    printf("string=%s\nbytes%d\n",buff,n_bytes); 
    close(fd);
    return 0;
}
