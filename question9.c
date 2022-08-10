#include<stdio.h>
int main()
{
int number,num,s=0,c;

printf("enter a number: ");
scanf("%d",&number);
num=number;
while(number!=0)
{   c=number%10;
    s=s+c*c*c;
    number=number/10;
}
if(s==num)
printf("given number is an armstrong number ");
else
printf("given number is not an armstrong number");
return 0;
}