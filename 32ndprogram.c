#include<stdio.h>
#include<conio.h>

int fib (int n)
{
	static int counter=0;
	if(n==1||n==2)
	{
		return(1);
	}
	else
	{
		return(fib(n-1)+fib(n-2));
	}
}

void main()
{
	
	int p;
	system("cls");
	printf("please give a number of fibonnaci series number\n");
	scanf("%d",&p);
	printf("your ans is %d", fib(p));
	return 0;
}