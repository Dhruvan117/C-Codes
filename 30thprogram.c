#include<stdio.h>
int f1 (){
	printf("Talent");
	return 1;
}
int f2 (){
	printf("Hunt");
	return 1;
}
int main()
{
	int p = f1() + f2();
	return 0;
}

