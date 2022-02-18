#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size, insertno,i;
	printf("please give how long you want to make an array :");
	scanf("%d",&size);
	int array[size];
	printf("please give every array input element line by line :");
	for(i=0;i<size;i++)
	{
   		scanf("%d",&array[i]);
	}

	if (size%2 == 0) // if array is even
	{
		insertno = array[size/2] + array[(size+2)/2];

		  for (i = size-1; i >= (size/2)+1; i--)
          {
        	array[i] = array[i - 1];
          }
        array[(size/2)-1] = insertno;
	}
	for(i=0;i<size;i++)//final array of odd
	{
   		printf("%d",array[i]);
	}
}