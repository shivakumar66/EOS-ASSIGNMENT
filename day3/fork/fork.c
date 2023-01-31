#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc,char const *argv[])
{
    pid_t id;
    printf("Before fork\n");
    id=fork();
    printf("After fork : PID: %d...PPID:%d\n",getpid(),getppid());
    printf("hello\n");
    if(0==id)
    {
        printf("child process\n");
    }
    else
    {
        printf("parent process\n");
    }
    return 0;
}
