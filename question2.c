#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter the term of fibbonaci series: ");
    scanf("%d",&n);
    int a=0,b=1,c;
    
    if(n>=1)
    printf("1st term of fibbonaci series is : %d\n",a);
    if(n>=2)
    printf("2nd term of fibbonaci series is : %d\n",b);
    while((i+2)<=n)
    {
    c=a+b;
    a=b;
    b=c;
    printf("%drd term of fibonacci series is: %d\n",i+2,c);
    i++;
    }
    return 0;
}