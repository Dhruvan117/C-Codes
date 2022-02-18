/*
*************************************************************
* Author  : Dangar Dhruvan                                  *
* Written in Sublime Text                                   *
* Code    : doubly linked list                              *
* Date    : 28/12/2021                                      *
* time    : 10:32                                           *
*                                                           *
* you can modify this code as per your need                 *
*************************************************************
*/


#include<stdio.h>             //Standard IO headerfile
#include<stdlib.h>

struct node
{
	int info;
	struct node *prev, *next;
};

struct node *start = NULL;

 

 void insertasfirstnode()
 {
 	struct node *n;
 	n = (struct node *)malloc(sizeof(struct node));
 	printf("enter a number.");
 	scanf("%d", &n->info);
 	n->prev = NULL;
 	n->next = NULL;
 	if (start==NULL)
 	{
 	 	start=n;
 	}
 	else
 	{
 		start->prev=n;
 		n->next = start;

 	}
 }

 void deletefirstnode()
 {
 	struct node *r;
 	if(start==NULL)
 	{
 		printf("list is empty");
 	}
 	else
 	{
 		r=start;
 		start=start->next;
 		start->prev=NULL;
 		free(r);
 	}
 }

 void viewlist()
 {
 	struct node *t;
 	if(start==NULL)
 	{
 		printf("list is empty");
 		while(t->next!=NULL)
 		{
 			printf("%d",t->info);
 		}
 	}
 }

 int menu()
{
	int ch;
	printf("\n1. Add value to the list.");
	printf("\n2. Delete first value.");
	printf("\n3. View list.");
	printf("\n4. Exit.\n");
	printf("\nEnter your choice:\n");
	scanf("%d",&ch);
	return(ch);
}
void main()
{
	while(1)
	{
		switch(menu())
		{
			case 1:
			insertasfirstnode();
			break;
			case 2:
			deletefirstnode();
			break;
			case 3:
			viewlist();
			break;
			case 4:
			exit(0);
			default:
			printf("invalid choice");
		}
	}
}