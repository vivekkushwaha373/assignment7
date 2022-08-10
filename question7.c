#include<stdio.h>
int main()
{ 
int count;
int a,b;
printf("enter the first number: ");
scanf("%d",&a);
printf("enter the second number: ");
scanf("%d",&b);
printf("prime numbers between %d to %d are: \n",a,b);
    for(int k=a+1;k<b;k++)
    {count=0;
    for(int i=2;i<=k;i++)
    {
      if(k%i==0)
      count++;
    }
    if(count==1)
    printf("%d\n",k);
    }
    return 0;
}