<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>

//Here we used enum to increase the readblity of code
typedef enum StrMatchType{
	False = -1,True = 0

} StrMatchType_e;

 StrMatchType_e str_cmp (char *srcStr, char *matchStr)
 {
 	int i=0,flag=0;

    //loop will work until one of the string is over or different ch is occure.
 	while((*srcStr != '\0') && (*matchStr != '\0'))
	 {
	 	if(*srcStr != *matchStr)
	 	{
 			flag = 1;         
 			break;
	 	}
	 	srcStr++;
	 	matchStr++;
	 	if ((*srcStr == '\0' && *matchStr != '\0'))
	 	{
	 		flag = 1;         
 			break;
	 	}
	 	else if ((*srcStr != '\0' && *matchStr == '\0'))
	 	{
	 		flag = 1;         
 			break;
	 	}
	 }


	 if(flag == 0)
	 {
	 	
	 	return (0);                           
	 }
	 else
	 {
	 	return (-1);                 
	 } 
 }


//main fuction
void main()
{
	StrMatchType_e Result;
	char str_one[30], str_two[30];             //two strings with 30 char limit

	printf("Enter string 1(max char 30 allowed).\n");
	scanf("%s",str_one);
	
	printf("\nEnter string 2(max char 30 allowed).\n");
	scanf("%s",str_two);
	
	Result = str_cmp(str_one,str_two);

	if (Result == True)                                
	{
		printf("\nString %s and String %s are same.",str_one,str_two);
	}
	else 
	{
		printf("\nString %s and String %s are NOT same.",str_one,str_two);
	}
}
=======
#include<stdio.h>

//Here we used enum to increase the readblity of code
typedef enum StrMatchType{
	False = -1,True = 0

} StrMatchType_e;

 StrMatchType_e str_cmp (char *srcStr, char *matchStr)
 {
 	int i=0,flag=0;

    //loop will work until one of the string is over or different ch is occure.
 	while((*srcStr != '\0') && (*matchStr != '\0'))
	 {
	 	if(*srcStr != *matchStr)
	 	{
 			flag = 1;         
 			break;
	 	}
	 	srcStr++;
	 	matchStr++;
	 	if ((*srcStr == '\0' && *matchStr != '\0'))
	 	{
	 		flag = 1;         
 			break;
	 	}
	 	else if ((*srcStr != '\0' && *matchStr == '\0'))
	 	{
	 		flag = 1;         
 			break;
	 	}
	 }


	 if(flag == 0)
	 {
	 	
	 	return (0);                           
	 }
	 else
	 {
	 	return (-1);                 
	 } 
 }


//main fuction
void main()
{
	StrMatchType_e Result;
	char str_one[30], str_two[30];             //two strings with 30 char limit

	printf("Enter string 1(max char 30 allowed).\n");
	scanf("%s",str_one);
	
	printf("\nEnter string 2(max char 30 allowed).\n");
	scanf("%s",str_two);
	
	Result = str_cmp(str_one,str_two);

	if (Result == True)                                
	{
		printf("\nString %s and String %s are same.",str_one,str_two);
	}
	else 
	{
		printf("\nString %s and String %s are NOT same.",str_one,str_two);
	}
}
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
#include<stdio.h>

//Here we used enum to increase the readblity of code
typedef enum StrMatchType{
	False = -1,True = 0

} StrMatchType_e;

 StrMatchType_e str_cmp (char *srcStr, char *matchStr)
 {
 	int i=0,flag=0;

    //loop will work until one of the string is over or different ch is occure.
 	while((*srcStr != '\0') && (*matchStr != '\0'))
	 {
	 	if(*srcStr != *matchStr)
	 	{
 			flag = 1;         
 			break;
	 	}
	 	srcStr++;
	 	matchStr++;
	 	if ((*srcStr == '\0' && *matchStr != '\0'))
	 	{
	 		flag = 1;         
 			break;
	 	}
	 	else if ((*srcStr != '\0' && *matchStr == '\0'))
	 	{
	 		flag = 1;         
 			break;
	 	}
	 }


	 if(flag == 0)
	 {
	 	
	 	return (0);                           
	 }
	 else
	 {
	 	return (-1);                 
	 } 
 }


//main fuction
void main()
{
	StrMatchType_e Result;
	char str_one[30], str_two[30];             //two strings with 30 char limit

	printf("Enter string 1(max char 30 allowed).\n");
	scanf("%s",str_one);
	
	printf("\nEnter string 2(max char 30 allowed).\n");
	scanf("%s",str_two);
	
	Result = str_cmp(str_one,str_two);

	if (Result == True)                                
	{
		printf("\nString %s and String %s are same.",str_one,str_two);
	}
	else 
	{
		printf("\nString %s and String %s are NOT same.",str_one,str_two);
	}
}
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
