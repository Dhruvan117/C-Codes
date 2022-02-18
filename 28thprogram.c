#include <stdio.h>
#include <stdlib.h>

struct person{

	char name[50];
	int citno;
	int dd_bhai;
	float salary;
};

int main()
{
	struct person a;

	printf("size of structure a  = %llu ",sizeof(a));
	printf("\n\n\nmax size of structure = %llu",SIZE_MAX);

	return 0;
}