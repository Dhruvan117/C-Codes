<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>


//here is a string copy function
char str_cpy(char *src, char *dest)
{
	int i=0;
	do
	{
		dest[i] = src[i];
		i++;
		
	}while(src[i] != '\0');                          //copy string untill its null


	return *dest;
}


//main program start from here
void main()
{
	char string_one[30],string_two[30];
	printf("Please enter your string.\n");
	scanf("%s",string_one);
	*string_two = str_cpy(string_one,string_two);    //storing address of copied string

	printf("your first string is %s and copied string is %s",string_one, string_two);
=======
#include<stdio.h>
#include<stdlib.h>


//here is a string copy function
char str_cpy(char *src, char *dest)
{
	int i=0;
	do
	{
		dest[i] = src[i];
		i++;
		
	}while(src[i] != '\0');                          //copy string untill its null


	return *dest;
}


//main program start from here
void main()
{
	char string_one[30],string_two[30];
	printf("Please enter your string.\n");
	scanf("%s",string_one);
	*string_two = str_cpy(string_one,string_two);    //storing address of copied string

	printf("your first string is %s and copied string is %s",string_one, string_two);
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
#include<stdio.h>
#include<stdlib.h>


//here is a string copy function
char str_cpy(char *src, char *dest)
{
	int i=0;
	do
	{
		dest[i] = src[i];
		i++;
		
	}while(src[i] != '\0');                          //copy string untill its null


	return *dest;
}


//main program start from here
void main()
{
	char string_one[30],string_two[30];
	printf("Please enter your string.\n");
	scanf("%s",string_one);
	*string_two = str_cpy(string_one,string_two);    //storing address of copied string

	printf("your first string is %s and copied string is %s",string_one, string_two);
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}