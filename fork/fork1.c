#include<stdio.h>
 #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
         #include <unistd.h>
         int main()
         {
            pid_t id;
            int fd;
            printf("before fork\n");
            fork();
            printf("after fork\n");
            execl("/home/batch-2/EOS/day4/pipes/pipes","-al" , NULL);
            return 0;
         }