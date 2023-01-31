#include<stdio.h>
#include <pthread.h>
#include<unistd.h>
   int count=0;
   pthread_mutex_t lock;
   void *inc_thread(void *data)
   {
    while(1)
    {
        pthread_mutex_lock(&lock);
        count++;
        printf("inc: %d\n",count);
        pthread_mutex_unlock(&lock);
    }
   }
    void *dec_thread(void *data)
   {
    while(1)
    {
        pthread_mutex_lock(&lock);
        count--;
        printf("dec: %d\n",count);
        pthread_mutex_unlock(&lock);
    }
   }
   int main()
   {
    pthread_t id_inc,id_dec;
    printf("before thread creation\n");
    pthread_attr_t thread_attr;
   // pthread_attr_init(&thread_attr);
    pthread_mutex_init(&lock,NULL);
   // pthread_attr_setdetachstate(&thread_attr, PTHREAD_CREATE_DETACHED);
    pthread_create(&id_inc,NULL,inc_thread,NULL);
   pthread_create(&id_dec,NULL,dec_thread,NULL);
    sleep(1);
   // pthread_detach(id_inc);
    //pthread_detach(id_dec);
   // pthread_attr_destroy(&thread_attr);
    
   // pthread_join(id_inc, NULL);
    //pthread_join(id_dec, NULL);
     pthread_mutex_destroy(&lock);
    printf("After thread joining\n");
    pthread_exit(NULL);
    return 0;
   }