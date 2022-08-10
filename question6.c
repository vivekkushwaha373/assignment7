#include<stdio.h>
int main()
{ int count;
printf("prime numbers between 1 to 100 are: \n");
    for(int k=2;k<=100;k++)
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