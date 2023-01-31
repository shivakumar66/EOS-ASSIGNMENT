#include<stdio.h>
#include <pthread.h>
#include<unistd.h>
#include "semaphore.h"
   int count=0;
   sem_t sem_lock;
   void *inc_thread(void *data)
   {
    while(1)
    {
        sem_wait(&sem_lock);
        count++;
        printf("inc: %d\n",count);
       sem_post(&sem_lock);
    }
   }
    void *dec_thread(void *data)
   {
    while(1)
    {
       sem_wait(&sem_lock);
        count--;
        printf("dec: %d\n",count);
       sem_post(&sem_lock);
    }
   }
   int main()
   {
    pthread_t id_inc,id_dec;
    printf("before thread creation\n");
    //pthread_attr_t thread_attr;
   // pthread_attr_init(&thread_attr);
   // pthread_mutex_init(&lock,NULL);
   // pthread_attr_setdetachstate(&thread_attr, PTHREAD_CREATE_DETACHED);
    sem_init(&sem_lock,0,1);
    pthread_create(&id_inc,NULL,inc_thread,NULL);
    pthread_create(&id_dec,NULL,dec_thread,NULL);
   // sleep(1);
   // pthread_detach(id_inc);
    //pthread_detach(id_dec);
   // pthread_attr_destroy(&thread_attr);
    
    pthread_join(id_inc, NULL);
    pthread_join(id_dec, NULL);
    sem_destroy(&sem_lock);
     //pthread_mutex_destroy(&lock);
     //printf("After thread joining\n");
     //pthread_exit(NULL);
     return 0;
   }