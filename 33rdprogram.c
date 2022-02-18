/*
*************************************************************
* Author  : Dangar Dhruvan                                  *
* Written in Sublime Text                                   *
* Code    : linked list                                     *
* Date    : 28/12/2021                                      *
* time    : 10:32                                           *
*                                                           *
* you can modify this code as per your need                 *
*************************************************************
*/



#include<stdio.h>             //Standard IO headerfile
#include<stdlib.h>

//New Linked list data structure node
struct node
{
	int info;                 // This will store int data of our Linked list
	struct node *link;        // This will contain node type pointer
};


//Starting Null pinter
struct node *start = NULL;


//create node function
struct node *createnode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node)); //Malloc return void type pointer so we type cast it to node type
	return(n);
}


//Insert node function
void insertnode()
{
	struct node *temp,*t;
	temp = createnode();
	printf("Enter a number: ");
	scanf("%d", &temp->info);
	temp->link=NULL;
	if (start==NULL)
	{
		start=temp;
	}
	else
	{
		t=start;
		while(t->link != NULL)
		{
			t = t->link;
		}
		t->link = temp;
	}
}


//Deletion of node function
void deletenode()
{
	struct node *r;
	if(start==NULL)
	{
		printf("List is empty.");
	}
	else
	{
		r=start;
		start=start->link;
		free(r);
	}

}


//for traversing
void viewlist()
{
	struct node *t;
	if(start==NULL)
	{
		printf("List is empty.");
	}
	else
	{
		t=start;
		while(t!=NULL)
		{
			printf("%d ",t->info);
			t=t->link;
		}
	}
	printf("\n");
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
			insertnode();
			break;
			case 2:
			deletenode();
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