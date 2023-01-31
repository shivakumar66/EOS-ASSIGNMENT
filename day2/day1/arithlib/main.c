#include<stdio.h>
#include"arith.h"
int main()
{
    int division =0;
    int multiplication=0;
    division= div(10,5);
    printf("the division is %d",division);
    multiplication = mul(2,10);
      printf("\nthe multiplication is %d",multiplication);
      int sum =0;
    int difference=0;
    sum =add(10,5);
    printf("\nthe addition is %d",sum);
    difference = sub(10,2);
      printf("\nthe difference is %d",difference);
      return 0;
}