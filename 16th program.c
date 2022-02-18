<<<<<<< HEAD
<<<<<<< HEAD
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
=======
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
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
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
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}