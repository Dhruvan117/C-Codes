//fibonnaci series
#include<stdio.h>

long fibonnaci(long x)
{
    if (x<=2)
    {
        return (1); 
    }
    else
    {
        return(fibonnaci(x-1)+fibonnaci(x-2));
    }
}

int main()
{
    long a;
    printf("please input your no. to find fibonaci series : ");
    scanf("%ld",&a);
    for(a;a<=10;a++)
    {
    printf("your %ld element of fibonnci series is %ld\n",a,fibonnaci(a));
    }
}