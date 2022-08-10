#include<stdio.h>
int main()
{
int s=0,c,num;

printf("armstrong number under 1000 are: \n");
for(int i=0;i<1000;i++)
{
s=0;
num=i;
while(num!=0)
{   
c=num%10;
s=s+c*c*c;
num=num/10;
}
if(s==i)
printf("%d\n",i);
}
return 0;
}