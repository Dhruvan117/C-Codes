#include<stdio.h>

void bin_search(int l[], int n, int item);
void main()
{
	int a[]={11,3,15,47,89,65,32,78,55,12},k;
	k=sizeof(a)/sizeof(a[0]);
	int count=0;
	for (int i=1; i<k;i++)
	{
		count++; 
		for(int j=0;j<i;j++)
		{
			int temp;
			if (a[j]>a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i=0; i<k;i++)
	{
		if(a[i]!=a[k-1])
		{
			printf("%d,",a[i]);
		}
		else
		{
			printf("%d.",a[i]);
		}
		
	}
	printf("\nloop iteration : %d",count);

	bin_search(a, 10, 65);
}

void bin_search(int l[], int n, int item)
{
	int set = 1, first=0,end = n-1, m;

	while (first<=end)
	{
		m = (first+end)/2;
		if(item==l[m])
		{
			printf("\nsearch successfull, item found, index %d", m);
			return;

		}
		else if(item > l[m])
		{
			first= m+1;
		}
		else
		{
			end = m-1;
		}
	}
	printf("search unsuccessfull");
}