#include<stdio.h>
void f1()
{
	static int x=0;
	x++;
	printf("%d\n",x);
}
void main()
{
	f1();
	f1();

}

