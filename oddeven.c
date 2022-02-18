#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int len_of_str, i, count;
	char str[50];
	gets(str);
	count=0;
	len_of_str=strlen(str);
	for (i=0;i<=len_of_str-2;i++)
	{
		int k=0;
		for (k=0;k<=len_of_str-2;k++)
		{
			if(str[i]==str[k])
				{
					count ++;
				}
		}

	if (count%2 == 0)
		{
			printf("Hence the output pairing is not possible");
			exit(0);
		}
	else
		{
			
		}
	}	
	printf("Pairing is possible");
	return 0;
}