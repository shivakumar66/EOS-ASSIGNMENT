#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>

#define buff_size 64
char buff[buff_size];
char bufff[buff_size];
struct mq_attr desd_mq_attr;

int main()
{
    mqd_t desd_mq_disc;
    int mq_sender,mq_reciever,mq_closer;
    desd_mq_attr.mq_flags = 0;
    desd_mq_attr.mq_maxmsg =4;
    desd_mq_attr.mq_msgsize=64;
    desd_mq_attr.mq_curmsgs=0;
    desd_mq_disc=mq_open("/desd_mq", O_CREAT | O_RDWR , S_IRUSR | S_IWUSR,&desd_mq_attr);
     if(desd_mq_disc==-1)
    {
        perror("Error:mq_open\n");
        exit(EXIT_FAILURE);
    }
    mq_reciever=mq_receive(desd_mq_disc,buff,64,0);
    printf("recievd msg : %s\n",buff);
     mq_reciever=mq_receive(desd_mq_disc,bufff,64,0);
     printf("recievd msg : %s\n",bufff);
    if(-1==mq_reciever)
    {
        perror("Error : mq_reciever\n");
    }
    
     
    mq_closer=mq_close(desd_mq_disc);
    if(-1==mq_closer)
    {
        perror("Error:mq_close");
        exit(EXIT_FAILURE);
    }
}