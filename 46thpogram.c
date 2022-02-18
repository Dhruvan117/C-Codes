#include<stdio.h>

void quick(int a[], int n, int beg, int end, int *LOC)
{
	int left,right,temp;
	left = beg;
	right = end;
	*LOC = beg;

step2:
	while ((a[*LOC]<=right) && (*LOC != right))
		right--;
	if(*LOC==right)
		return;
	if(a[*LOC]>a[right])
	{
		temp = a[*LOC];
		a[*LOC] = a[right];
		a[right]=temp;
		*LOC = right;
	}
	goto step3;
step3:
	while(a[left]<=a[*LOC] && left != *LOC)
		left++;
	if(*LOC==left)
	{
		return;
	}
	if(a[left]>a[*LOC])
	{
		temp = a[left];
		a[left] = a[*LOC];
		a[*LOC] = temp;
		*LOC = left;
	}
	goto step2;

}

void quick_sort(int a[],int n)
{
	int beg, end, loc, top=-1;
	int lower[10],upper[10];
	if (n>1)
	{
		top++;
		lower[top]=0;
		upper[top]=n-1;
	}
	while(top != -1)
	{
		beg = lower[top];
		end = upper[top];
		top--;
		quick(a, n, beg, end, &loc);
		if (beg<loc-1)
		{
			lower[top]=beg;
			upper[top]=loc-1;
		}
		if (loc+1< end)
		{
			top++;
			lower[top]=loc + 1;
			upper[top]=end;
		}
	}

}

int main()
{
	int arr[]={11,22,34,55,67,88,97,44,32,45,12,65,46};
	quick_sort(arr,13);
	for(int i=0;i<=12;i++)
	{
		printf("%d ",arr[i]);
	}
}