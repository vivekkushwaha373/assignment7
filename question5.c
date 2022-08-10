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
    if(k==1)
   {
     printf("Numbers are co-prime");
   }
   else
   printf("numbers are not co prime");
    return 0;
}