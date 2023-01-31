#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
int a,b;
sem_t lock;
void *thread1(void *data)
{
        sem_wait(&lock);
  //      printf("enter the values of a and b\n");
    //    scanf("%d %d",&a,&b);
         a=10;
         b=2;
        int c=a/b;
        printf("%d\n",c);
        sem_post(&lock);
}
void *thread2(void *data)
{
    sem_wait(&lock);
     a=10;
     b=30;
    int m=a+b;
    printf("%d\n",m);
    sem_post(&lock);
}
void *thread3(void *data)
{
    sem_wait(&lock);
     a=3;
     b=6;
    int n =a*b;
    printf("%d\n",n);
    sem_post(&lock);
}
int main()
{
    pthread_t ini,add,sub;
    sem_init(&lock,0,3);
    pthread_create(&ini,NULL,thread1,NULL);
    pthread_create(&add,NULL,thread2,NULL);
    pthread_create(&sub,NULL,thread3,NULL);
    sleep(1);
    pthread_join(ini,NULL);
    pthread_join(add,NULL);
    pthread_join(sub,NULL);
    sem_destroy(&lock);
    
    return 0;

}