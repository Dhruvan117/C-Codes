#include<stdio.h>

void main()
{
	int N, min;
	printf("please enter any value:");
	scanf("%d",&N);

	for (int i=1;i<=N;i++) 
	{
		for (int j=1;j<=N;j++) 
		{
			min = i<j ? i:j;
			printf("%2d ",N-min+1);
		}
		for (int j = N-1;j>=1;j--) 
		{
			min = i<j ? i:j;
			printf("%2d ",N-min+1);
		}
		printf("\n");
	}

	for (int i=N-1; i>=1;i--) 
	{

		for (int j=1;j<=N;j++) 
		{
			min = i<j ? i:j;
			printf("%2d ",N-min+1);
		}
		for (int j=N-1;j>=1;j--) 
		{
			min=i<j ? i:j;
			printf("%2d ",N-min+1);
		}
		printf("\n");


	}
}
