<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
}list;
int is_empty(const list* l){return(l=NULL);}  //for check if list is empty
list *create_list(int d)   //for creating list
{
	list *head=malloc(sizeof(list));
	head -> data = d;
	head -> next = NULL;
}
list *add_to_front(int d, list *h) //for adding elements in front line
{
	list *head = create_list(d);
	head -> next=h;
	return head;
}
list *array_to_list(int d[], int size)//for converting array in to linked list 
{
	list *head = create_list(d[0]);
	int i;
	for(i=1; i < size; i++)
	{
		head = add_to_front(d[i],head); //this function adding array element to the front on linked list
	}
	return head;
}
void print_list(list *h, char *title) //for printing linked list
{
	printf("%s\n",title);
	int i=0;                           //for control list up to 5 element per display
	while(h!=NULL)
	{
		if(i % 20 ==0)
		{
			printf("\n");
		}
		printf("%d :",h->data);
		h = h -> next;
		i++;
	}
}

int main()   //main program started here

{
	int i,j,numberofelemnts;
	int a[100];                //array length
	for(i=0;i<100;i++)         //loop for generating random number
	{
		a[i]=rand();
	}

	numberofelemnts=(sizeof(a)/sizeof(a[0])); //for more security while sorting

	for(i=0;i<numberofelemnts-1;i++)   //bubble sorting
	{
		for(j=0;j<numberofelemnts-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	list list_of_int;   //creating list veriable
	list *head = NULL;  //initialization for pointer
	head = array_to_list(a,100);  // array to linked list conversion
	print_list(head, "100 element list"); //for printing linked list
	return 0;
	
}
=======
#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
}list;
int is_empty(const list* l){return(l=NULL);}  //for check if list is empty
list *create_list(int d)   //for creating list
{
	list *head=malloc(sizeof(list));
	head -> data = d;
	head -> next = NULL;
}
list *add_to_front(int d, list *h) //for adding elements in front line
{
	list *head = create_list(d);
	head -> next=h;
	return head;
}
list *array_to_list(int d[], int size)//for converting array in to linked list 
{
	list *head = create_list(d[0]);
	int i;
	for(i=1; i < size; i++)
	{
		head = add_to_front(d[i],head); //this function adding array element to the front on linked list
	}
	return head;
}
void print_list(list *h, char *title) //for printing linked list
{
	printf("%s\n",title);
	int i=0;                           //for control list up to 5 element per display
	while(h!=NULL)
	{
		if(i % 20 ==0)
		{
			printf("\n");
		}
		printf("%d :",h->data);
		h = h -> next;
		i++;
	}
}

int main()   //main program started here

{
	int i,j,numberofelemnts;
	int a[100];                //array length
	for(i=0;i<100;i++)         //loop for generating random number
	{
		a[i]=rand();
	}

	numberofelemnts=(sizeof(a)/sizeof(a[0])); //for more security while sorting

	for(i=0;i<numberofelemnts-1;i++)   //bubble sorting
	{
		for(j=0;j<numberofelemnts-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	list list_of_int;   //creating list veriable
	list *head = NULL;  //initialization for pointer
	head = array_to_list(a,100);  // array to linked list conversion
	print_list(head, "100 element list"); //for printing linked list
	return 0;
	
}
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
}list;
int is_empty(const list* l){return(l=NULL);}  //for check if list is empty
list *create_list(int d)   //for creating list
{
	list *head=malloc(sizeof(list));
	head -> data = d;
	head -> next = NULL;
}
list *add_to_front(int d, list *h) //for adding elements in front line
{
	list *head = create_list(d);
	head -> next=h;
	return head;
}
list *array_to_list(int d[], int size)//for converting array in to linked list 
{
	list *head = create_list(d[0]);
	int i;
	for(i=1; i < size; i++)
	{
		head = add_to_front(d[i],head); //this function adding array element to the front on linked list
	}
	return head;
}
void print_list(list *h, char *title) //for printing linked list
{
	printf("%s\n",title);
	int i=0;                           //for control list up to 5 element per display
	while(h!=NULL)
	{
		if(i % 20 ==0)
		{
			printf("\n");
		}
		printf("%d :",h->data);
		h = h -> next;
		i++;
	}
}

int main()   //main program started here

{
	int i,j,numberofelemnts;
	int a[100];                //array length
	for(i=0;i<100;i++)         //loop for generating random number
	{
		a[i]=rand();
	}

	numberofelemnts=(sizeof(a)/sizeof(a[0])); //for more security while sorting

	for(i=0;i<numberofelemnts-1;i++)   //bubble sorting
	{
		for(j=0;j<numberofelemnts-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	list list_of_int;   //creating list veriable
	list *head = NULL;  //initialization for pointer
	head = array_to_list(a,100);  // array to linked list conversion
	print_list(head, "100 element list"); //for printing linked list
	return 0;
	
}
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
