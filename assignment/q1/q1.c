#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<errno.h>
int main(int argc,const char* argv[])
{
     int fd;
     int fp;
     unsigned char buff[500000];
     ssize_t bytes_read;
      ssize_t bytes_write;
      int ret_cls1;
      int ret_cls2;
    fd=open(argv[1],O_RDONLY, S_IRUSR | S_IWUSR);
      if(-1==fd)
      {
        printf("In the source file\n");
        printf("Erro No, :: %d\n",errno);
        printf("Error");
        exit(EXIT_FAILURE);
      }
    bytes_read =read(fd,buff,sizeof(buff));
    close(fd);
    fp=open(argv[2],O_WRONLY | O_CREAT, S_IRUSR |  S_IWUSR);
    if(-1==fp)
    {
        perror("Destination file error");
        exit(EXIT_FAILURE);
    }
    bytes_write=write(fp,buff,strlen(buff));
    if(bytes_write==-1)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }
    close(fp);

    // ret_cls1 = close(fd);
    // if(ret_cls1==-1)
    // {
    //     perror("Error");
    //     exit(EXIT_FAILURE);
    // }
    //  ret_cls2 = close(fd);
    // if(ret_cls2==-1)
    // {
    //     perror("Error");
    //     exit(EXIT_FAILURE);
    // }
    
    return 0;

}