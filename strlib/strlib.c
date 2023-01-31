#include<stdio.h>
#include"str_header.h"
int main()
{
    int n;
    char s1[10]="shiva";
    char s2[10]="kumar";
    n=str_len(s1);
    printf("%d\n",n);
    char s3[10];
    str_cpy(s3,s1);
    printf("%s\n",s3);
    int m=str_cmp(s1,s2);
    printf("%d\n",m);
    str_cat(s1,s2);
    printf("%s\n",s1);
    str_rev(s1);
    printf("%s\n",s1);
    return 0;
}