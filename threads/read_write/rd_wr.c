#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
pthread_rwlock_t rw_lock;
int a,b;
void *thread1(void *data)
{
    
    
        pthread_rwlock_wrlock(&rw_lock);
        printf("enter the values a and b\n");
        scanf("%d %d", &a , &b);
        sleep(3);
        pthread_rwlock_unlock(&rw_lock);

}
void *thread2(void *data)
{

    
    pthread_rwlock_rdlock(&rw_lock);
    printf(" values are : %d %d\n",a, b);
    pthread_rwlock_unlock(&rw_lock);
    
    
}
void *thread3(void *data)
{
    
    pthread_rwlock_rdlock(&rw_lock);
    printf("hello from thread 3 the values are %d %d\n",a,b);
    pthread_rwlock_unlock(&rw_lock);
    
   
}
int main()
{
    pthread_t t_1,t_2,t_3;
    pthread_rwlock_init(&rw_lock,NULL);
    pthread_create(&t_1,NULL,thread1,NULL);
    pthread_create(&t_2,NULL,thread2,NULL);
    pthread_create(&t_3,NULL,thread3,NULL);
    sleep(2);
    pthread_join(t_1,NULL);
    pthread_join(t_2,NULL);
    pthread_join(t_3,NULL);
    pthread_rwlock_destroy(&rw_lock);
}