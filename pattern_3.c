#include<stdio.h>
void main()
{
	for(int i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}