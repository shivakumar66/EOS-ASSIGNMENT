#include<stdio.h>
#include<string.h>
typedef struct student
{
    int roll_no;
    char name[10];
    int marks;
}stu_t;
int main()
{
    stu_t class_9[5];
    stu_t class_10[5];
    printf("enter class 9 details\n");
    for(int i=0;i<5;i++)
    {
        class_9[i].roll_no = i+1;
        scanf(" %s",&class_9[i].name);
        scanf(" %d\n",&class_9[i].marks);
    }
     printf("enter class 10 details\n");
    for(int i=0;i<5;i++)
    {
        class_10[i].roll_no = i+1;
        scanf("%s",&class_10[i].name);
        scanf("%d\n",&class_10[i].marks);
    }
    printf("class 9 students list\n");
     for(int i=0;i<5;i++)
    {
        printf("roll_no =%d ",class_9[i].roll_no);
        printf(" name  %s",class_9[i].name);
        printf(" marks %d\n",class_9[i].marks);
    }
     printf("class 10 students list\n");
    for(int i=0;i<5;i++)
    {
        printf("class_10.roll_no =%d",class_10[i].roll_no);
        printf(" name  %s",class_10[i].name);
        printf(" marks  %d\n",class_10[i].marks);
    }
    return 0;

}
