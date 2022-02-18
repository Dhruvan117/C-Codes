//find gcd
#include<stdio.h>
int gcd(int a, int b)
{
    if (a%b==0)
    {
        return(b);
    }
    else if (b%a==0)
    {
        return(a);
    }
    else if (a==b)
    {
        return(b);
    }
    else if(a>b)
    {
        return(gcd(a%b,b));
    }
    else
    {
        return(gcd(b%a,a));
    }
}
int main()
{
    int a,b;
    printf("give your first no.:");
    scanf("%d",&a);
    printf("give your second no.:");
    scanf("%d",&b);
    printf("your asked GCD is %d",gcd(a,b));

}