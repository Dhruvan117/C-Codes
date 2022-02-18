<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *initializeFileReadmode(FILE *fp )
{
	fp = fopen("abc.txt","r+");
	if(fp == NULL)
	{
		printf("File cannot open.\n");
		exit(1);
	}
	return(fp);
}
FILE *initializeFileWritemode(FILE *fp)
{
	fp = fopen("abc.txt","a+");
	if(fp == NULL)
	{
		printf("File cannot open.\n");
		exit(1);
	}
	return(fp);
}

void giveInput(char userstring[])
{
	printf("please enter string within 150 characters.\n");
	gets(userstring);
}

void writeFile(char userstring[], FILE *fp)
{
	for(int i=0;i<strlen(userstring);i++)
	{
		fputc(userstring[i],fp);
	}
}

void reform(int Number, char appendstring[],char fileRead[],char appendstring1[26])
{
	int j=0,i=0;
	while(fileRead[j]!='\0')
	{
		if(j<Number)
		{
			appendstring[j]=fileRead[j];
		}
	else
	{
		appendstring1[i]=fileRead[Number];
		Number++;
		i++;
	}
		j++;
	}
	printf("%s\n",appendstring);
}


void main()
{

	FILE *fp;
	int Number;
	char userstring[150],appendstring[40],x[5],fileRead[40], appendstring1[40];
	fp = initializeFileReadmode(fp);
	
	giveInput(userstring);

	printf("give a integer value,where you want concat your string.\n");
	gets(x);
	Number=atoi(x);
	fgets(fileRead,30,fp);
	printf("%s\n",fileRead);
	reform(Number,appendstring,fileRead,appendstring1);
	fclose(fp);
	fp = fopen("abc.txt","w");
	fclose(fp);
	fp = initializeFileWritemode(fp);
	printf("%s\n",appendstring);
	printf("%s\n",userstring);
	printf("%s\n",appendstring1);
	writeFile(appendstring,fp);
	writeFile(userstring,fp);
	writeFile(appendstring1,fp);	
	fclose(fp);
=======
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *initializeFileReadmode(FILE *fp )
{
	fp = fopen("abc.txt","r+");
	if(fp == NULL)
	{
		printf("File cannot open.\n");
		exit(1);
	}
	return(fp);
}
FILE *initializeFileWritemode(FILE *fp)
{
	fp = fopen("abc.txt","a+");
	if(fp == NULL)
	{
		printf("File cannot open.\n");
		exit(1);
	}
	return(fp);
}

void giveInput(char userstring[])
{
	printf("please enter string within 150 characters.\n");
	gets(userstring);
}

void writeFile(char userstring[], FILE *fp)
{
	for(int i=0;i<strlen(userstring);i++)
	{
		fputc(userstring[i],fp);
	}
}

void reform(int Number, char appendstring[],char fileRead[],char appendstring1[26])
{
	int j=0,i=0;
	while(fileRead[j]!='\0')
	{
		if(j<Number)
		{
			appendstring[j]=fileRead[j];
		}
	else
	{
		appendstring1[i]=fileRead[Number];
		Number++;
		i++;
	}
		j++;
	}
	printf("%s\n",appendstring);
}


void main()
{

	FILE *fp;
	int Number;
	char userstring[150],appendstring[40],x[5],fileRead[40], appendstring1[40];
	fp = initializeFileReadmode(fp);
	
	giveInput(userstring);

	printf("give a integer value,where you want concat your string.\n");
	gets(x);
	Number=atoi(x);
	fgets(fileRead,30,fp);
	printf("%s\n",fileRead);
	reform(Number,appendstring,fileRead,appendstring1);
	fclose(fp);
	fp = fopen("abc.txt","w");
	fclose(fp);
	fp = initializeFileWritemode(fp);
	printf("%s\n",appendstring);
	printf("%s\n",userstring);
	printf("%s\n",appendstring1);
	writeFile(appendstring,fp);
	writeFile(userstring,fp);
	writeFile(appendstring1,fp);	
	fclose(fp);
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *initializeFileReadmode(FILE *fp )
{
	fp = fopen("abc.txt","r+");
	if(fp == NULL)
	{
		printf("File cannot open.\n");
		exit(1);
	}
	return(fp);
}
FILE *initializeFileWritemode(FILE *fp)
{
	fp = fopen("abc.txt","a+");
	if(fp == NULL)
	{
		printf("File cannot open.\n");
		exit(1);
	}
	return(fp);
}

void giveInput(char userstring[])
{
	printf("please enter string within 150 characters.\n");
	gets(userstring);
}

void writeFile(char userstring[], FILE *fp)
{
	for(int i=0;i<strlen(userstring);i++)
	{
		fputc(userstring[i],fp);
	}
}

void reform(int Number, char appendstring[],char fileRead[],char appendstring1[26])
{
	int j=0,i=0;
	while(fileRead[j]!='\0')
	{
		if(j<Number)
		{
			appendstring[j]=fileRead[j];
		}
	else
	{
		appendstring1[i]=fileRead[Number];
		Number++;
		i++;
	}
		j++;
	}
	printf("%s\n",appendstring);
}


void main()
{

	FILE *fp;
	int Number;
	char userstring[150],appendstring[40],x[5],fileRead[40], appendstring1[40];
	fp = initializeFileReadmode(fp);
	
	giveInput(userstring);

	printf("give a integer value,where you want concat your string.\n");
	gets(x);
	Number=atoi(x);
	fgets(fileRead,30,fp);
	printf("%s\n",fileRead);
	reform(Number,appendstring,fileRead,appendstring1);
	fclose(fp);
	fp = fopen("abc.txt","w");
	fclose(fp);
	fp = initializeFileWritemode(fp);
	printf("%s\n",appendstring);
	printf("%s\n",userstring);
	printf("%s\n",appendstring1);
	writeFile(appendstring,fp);
	writeFile(userstring,fp);
	writeFile(appendstring1,fp);	
	fclose(fp);
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}