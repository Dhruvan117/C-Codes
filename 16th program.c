//factor using recursion
#include<stdio.h>
unsigned long recursion(unsigned long x)
{
    if (x>1)
    {
        return (x*recursion (x-1));
    }
    else
    {
        return 1;
    }
};
int main()
{ 
    unsigned long n;
    printf("please give no. that you want to find factorial for : ");
    scanf("%lu",&n);
    printf("your ans is %lu",recursion(n));
}