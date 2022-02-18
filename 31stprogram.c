<<<<<<< HEAD
<<<<<<< HEAD
//factorial using recursion

#include<stdio.h>

unsigned long long int fact(int n)
{
	if(n>0)
	{
		return(n*fact(n-1));
	}
	else
		return(1);
}
void main()
{
	int n;
	printf("please give a number that you want to factorize\n");
	scanf("%d",&n);
	printf("your ans is %d \n",fact(n));
=======
//factorial using recursion

#include<stdio.h>

unsigned long long int fact(int n)
{
	if(n>0)
	{
		return(n*fact(n-1));
	}
	else
		return(1);
}
void main()
{
	int n;
	printf("please give a number that you want to factorize\n");
	scanf("%d",&n);
	printf("your ans is %d \n",fact(n));
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
//factorial using recursion

#include<stdio.h>

unsigned long long int fact(int n)
{
	if(n>0)
	{
		return(n*fact(n-1));
	}
	else
		return(1);
}
void main()
{
	int n;
	printf("please give a number that you want to factorize\n");
	scanf("%d",&n);
	printf("your ans is %d \n",fact(n));
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}