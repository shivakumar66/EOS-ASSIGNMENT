 #include <stdio.h>
 #include <sys/types.h>
 #include <unistd.h>
 int main()
 {
    pid_t id;
    pid_t parent_id;
    id=getpid();
    parent_id = getppid();
    printf("PID%d\nparent_PID%d",id,parent_id);
    return 0;
 }
