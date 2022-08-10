#include<stdio.h>
int main()
{
    int num,c,a=0,b=1;
    printf("enter the number ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("it lies in fibbonaci series");
    }
    else
    {
    while(1)
    {
     c=a+b;
     a=b;
     b=c;
     if(c==num)
     { 
     printf("it lies in fibbonaci series");
     break;
     }
     if(c>num)
     {
        printf("it doesn't lie in fibbonaci series");
        break;
     }
    }
    }
    return 0;
}