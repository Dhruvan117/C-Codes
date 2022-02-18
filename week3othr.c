<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

typedef struct element {char symbol[3]; char name[10]; double weight;} element;
typedef struct list {element data; struct list* next;} list;


void print_element(element e1)
{
	printf("Symbol: %s, Name: %s,  Weight: %lf\n", e1.symbol, e1.name, e1.weight);
}


list* create_list(element e1)
{
	list* head = malloc(sizeof(list));
	head->data = e1;
	head->next = NULL;
	return head;
}


list* add_to_front(element e1, list* h)
{
	list* head = create_list(e1);
	head->next = h;
	return head;
}


list* array_to_list(element e1[], int size)
{
	list* head = create_list(e1[0]);
	int i;
	for(i=1;i<size;i++)
	{
		head = add_to_front(e1[i],head);
	}

	return head;
}

void print_list(list* h)
{
	while(h!=NULL)
	{
		print_element(h->data);
		h = h->next;
	}


}



void main()
{
	list periodic_table;
	list* head = NULL;

	element table[10] = {
		{"Ne","Neon", 20.180}, 
		{"F","Flourine", 18.998}, 
		{"O","Oxygen", 15.999}, 
		{"N","Nitrogen",14.007}, 
		{"C","Carbon", 12.011},
		{"B","Boron", 10.811}, 
		{"Be","Beryllium", 9.012}, 
		{"Li","Lithium", 6.941}, 
		{"He","Helium", 4.003}, 
		{"H","Hydrogen", 1.008}
	};


	head = array_to_list(table, 10);
    	print_list(head);



}
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

typedef struct element {char symbol[3]; char name[10]; double weight;} element;
typedef struct list {element data; struct list* next;} list;


void print_element(element e1)
{
	printf("Symbol: %s, Name: %s,  Weight: %lf\n", e1.symbol, e1.name, e1.weight);
}


list* create_list(element e1)
{
	list* head = malloc(sizeof(list));
	head->data = e1;
	head->next = NULL;
	return head;
}


list* add_to_front(element e1, list* h)
{
	list* head = create_list(e1);
	head->next = h;
	return head;
}


list* array_to_list(element e1[], int size)
{
	list* head = create_list(e1[0]);
	int i;
	for(i=1;i<size;i++)
	{
		head = add_to_front(e1[i],head);
	}

	return head;
}

void print_list(list* h)
{
	while(h!=NULL)
	{
		print_element(h->data);
		h = h->next;
	}


}



void main()
{
	list periodic_table;
	list* head = NULL;

	element table[10] = {
		{"Ne","Neon", 20.180}, 
		{"F","Flourine", 18.998}, 
		{"O","Oxygen", 15.999}, 
		{"N","Nitrogen",14.007}, 
		{"C","Carbon", 12.011},
		{"B","Boron", 10.811}, 
		{"Be","Beryllium", 9.012}, 
		{"Li","Lithium", 6.941}, 
		{"He","Helium", 4.003}, 
		{"H","Hydrogen", 1.008}
	};


	head = array_to_list(table, 10);
    	print_list(head);



}
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

typedef struct element {char symbol[3]; char name[10]; double weight;} element;
typedef struct list {element data; struct list* next;} list;


void print_element(element e1)
{
	printf("Symbol: %s, Name: %s,  Weight: %lf\n", e1.symbol, e1.name, e1.weight);
}


list* create_list(element e1)
{
	list* head = malloc(sizeof(list));
	head->data = e1;
	head->next = NULL;
	return head;
}


list* add_to_front(element e1, list* h)
{
	list* head = create_list(e1);
	head->next = h;
	return head;
}


list* array_to_list(element e1[], int size)
{
	list* head = create_list(e1[0]);
	int i;
	for(i=1;i<size;i++)
	{
		head = add_to_front(e1[i],head);
	}

	return head;
}

void print_list(list* h)
{
	while(h!=NULL)
	{
		print_element(h->data);
		h = h->next;
	}


}



void main()
{
	list periodic_table;
	list* head = NULL;

	element table[10] = {
		{"Ne","Neon", 20.180}, 
		{"F","Flourine", 18.998}, 
		{"O","Oxygen", 15.999}, 
		{"N","Nitrogen",14.007}, 
		{"C","Carbon", 12.011},
		{"B","Boron", 10.811}, 
		{"Be","Beryllium", 9.012}, 
		{"Li","Lithium", 6.941}, 
		{"He","Helium", 4.003}, 
		{"H","Hydrogen", 1.008}
	};


	head = array_to_list(table, 10);
    	print_list(head);



}
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
