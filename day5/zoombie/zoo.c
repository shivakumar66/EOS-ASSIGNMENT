#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc,char const *argv[])
{
    printf("Inside %s() function\n", __FUNCTION__);

    pid_t id;
    printf("Before fork\n");
    id=fork();
    printf("After fork : PID: %d...PPID:%d\n",getpid(),getppid());
    if(0==id)
    {
        printf("Inside Child process: \n");
        printf("child id=%d\n",getpid());
        printf("Child: parent process id id=%d\n",getppid());
      //  sleep(10);
        printf("Child completed....!!!\n");
    }
    else
    {
        printf("Inside Parent process: \n");
        printf("parent process id%d=\n",getpid());
        printf("Parent wating...........\n");
        sleep(20);
        printf("Parent completed...!!!!\n");
    }
    return 0;
}