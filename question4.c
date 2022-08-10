#include<stdio.h>
int main()
{
    int a,b,d,i=1,k;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    d= a>b?b:a;
    
    while(i<=d)
    {
        if(a%i==0 && b%i==0)
        {
        k=i;
        }
        i++;
    }
    printf("H.C.F is %d",k);
    return 0;
}