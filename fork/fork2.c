#include<stdio.h>
#include <sys/stat.h>
 #include <fcntl.h>
   #include <unistd.h>

int main()
{
    unsigned char buff[128];
      unsigned char bufff[128];
      int n_bytes_read,n_byte_write1,n_bytes_write,n_bytes_read2;
    pid_t id;
    int fd[2];
    int fp[2];
    pipe(fd);
    pipe(fp);
    id=fork();
    if(0==id)
    {
        close(fd[1]);
       n_bytes_read= read(fd[0],buff,128);
        printf("%s\n",buff);
        printf("bytes recieved from pipe1 :%d\n",n_bytes_read);
        close(fd[0]);
        //using second pipe
         close(fp[0]);
        n_bytes_write=write(fp[1],"hello from pipe2\n",17);
         printf("bytes sent from pipe2 :%d\n",n_bytes_write);
        close(fd[0]);
        
        close(fp[1]);
    }
    else
    {
        close(fd[0]);
        n_byte_write1=write(fd[1],"desd\n",5);
         printf("bytes sent from pipe1 :%d\n",n_byte_write1);
        close(fd[1]);
        //using second pipe
         close(fp[1]);
       n_bytes_read2= read(fp[0],buff,128);
         printf("bytes recieved from pipe2 :%d\n",n_bytes_read2);
        printf("%s\n",buff);
        close(fp[0]);
    }
    return 0;
}