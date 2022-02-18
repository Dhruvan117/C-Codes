//sum of rendom series
#include<stdio.h>

int main()
{
    int sum=0,count=0;
    for(int i=2;i<=1024;)
    {
        sum = sum + i;
        count++;
        i=i+2;
        printf("sum is %d\n",sum);
    }
    printf("count=%d\nsum=%d",count,sum);
    
}