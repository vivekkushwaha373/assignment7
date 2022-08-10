#include<stdio.h>
int main()
{
    int term,i=0;
    int a=0,b=1,c;
 
    printf("enter the term of the fibanacci series : ");
    scanf("%d",&term);
    
    while(i<(term-2))
    {
      c=a+b;
      a=b;
      b=c;
      i++;
    }
    if(term>=3)
    printf("%d term fibanacci series is : %d ",term,c);
    else
    {
        if(term==2)
        printf("%d term fibanacci series is : 1",term);
        else
        printf("%d term fibanacci series is : 0",term);
    }
    return 0;
}

/*
fibonacci series 0 1 1 2 3 5 8*/