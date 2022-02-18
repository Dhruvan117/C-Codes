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

#include<stdlib.h>
#include<stdio.h>

struct arraystack   //new stack data type structure
{
	int top;
	unsigned int capacity;
	int *array;
};


//for creat an stack
struct arraystack *createstack(int cap)
{
	struct arraystack *stack;
	stack = malloc(sizeof(struct arraystack));
	stack->capacity = cap;
	stack->top = -1;
	stack->array = malloc(sizeof(int)*stack->capacity);
	return(stack);
}


//check if array is full or not
int isfull(struct arraystack *stack)
{
	if(stack->top == stack->capacity-1)
		return(1);
	else
		return(0);
}

int isempty(struct arraystack *stack)
{
	if(stack->top==-1)
		return(1);
	else
		return(0);
}


//function to push into arraystack 
void push(struct arraystack *stack,int item)
{
	if (!isfull(stack))
	{
		stack->top++;
		stack->array[stack->top]=item;
	}
}

int pop(struct arraystack *stack)
{
	int item;
	if(!isempty(stack))
	{
		item = stack->array[stack->top];
		stack->top--;
		return(item);
	}
	return(-1); 
}


int main()
{
	int choice,item;
	struct arraystack *stack;
	stack = createstack(4);
	
	while(1)
	{
		printf("\n1. push");
		printf("\n2. pop");
		printf("\n3. exit");
		printf("\nenter your choice");
		printf("\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			printf("\nEnter new number: ");
			scanf("%d",&item);
			if(stack->capacity!=4)
			{
				push(stack,item);	
			}
			
			break;
			case 2:
			item=pop(stack);
			if(item==-1)
			{
				printf("stack is empty");
			}
			else
			{
				printf("\nPoped value : %d",item);
			}
			break;
			case 3:
			exit(0);

		}

	}
}