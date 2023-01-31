#include<stdio.h>
 #include <sys/types.h>
 #include <unistd.h>
 int main( int argc,char const *argv[])
 {
    unsigned char buff[128];
    pid_t id;
    int fd[2];
    pipe(fd);
    id=fork();
    if(0==id)
    {
        close(fd[1]);
        read(fd[0],buff,128);
        printf("recieved %s\n",buff);
        close(fd[0]);
    }
    else
    {
        close(fd[0]);
        write(fd[1],"hello",5);
        close(fd[1]);
    }
    return 0;
 }