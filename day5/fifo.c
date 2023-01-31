#include<stdio.h>
#include <unistd.h>        
#include <sys/stat.h>
#include <fcntl.h>
     int main(int argc,char const *argv[])
     {
      int fd;
      ssize_t bytes;

      fd=open("desdfifo",O_WRONLY);
      bytes = write(fd,"desd file",10);
      close(fd);
      return 0;
     }