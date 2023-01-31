#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
int add(int a,int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}

int main()
{
    int num=0,res;
    int jay=0;
    res=add(num,jay);
    printf("the resultant is %d ", res);
    return 0;
}
