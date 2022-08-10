#include<stdio.h>
int main()
{ 
int count;
int a;
printf("enter a number after which you want to find a prime number: ");
scanf("%d",&a);

printf("prime numbers after %d is: ",a);
    for(int k=a+1; ;k++)
    {count=0;
    for(int i=2;i<=k;i++)
    {
      if(k%i==0)
      count++;
    }
    if(count==1)
    {printf("%d\n",k);
    break;}
    }
    return 0;
}