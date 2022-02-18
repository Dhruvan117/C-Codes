#include<stdio.h>
#include<stdlib.h>

//Structure for a node 
struct Node{int data; struct Node *next;};

//Insert a node at the beginning of a linked list 
void insertAtTheBegin(struct Node **start_ref, int data);

//Bubble sort the given linked list 
void bubbleSort(struct Node *start);

//Swap data of two nodes a and b
void swap(struct Node *a, struct Node *b);

//Print nodes in a given linked list 
void printList(struct Node *start);

int main()
{
    int arr[100]; //Create an array of 100
    int list_size, i;
    srand(0); //Seed the random number generator

    //start with empty linked list 
    struct Node *start = NULL;

    /* Create linked list from the array arr[].
       Loop over your array with srand and fill it up */
    for (i = 0; i< 100; i++){
        insertAtTheBegin(&start, arr[i] = rand()% 100 + 1); // Rand in the range 1 to 100
    }

    //print list before sorting 
    printf("Linked List before sorting: \n");
    printList(start);

    //sort the linked list 
    bubbleSort(start);

    //print list after sorting 
    printf("\n\nLinked List after sorting: \n");
    printList(start);

    getchar();
    return 0;
}


//Insert a node at the beginning of a linked list 
void insertAtTheBegin(struct Node **start_ref, int data)
{
    struct Node *ptr1 = (struct Node*)malloc(sizeof(struct Node));
    ptr1->data = data;
    ptr1->next = *start_ref;
    *start_ref = ptr1;
}

//Print nodes in a given linked list */
void printList(struct Node *start)
{
    int count = 50;
    int columns = 10;

    struct Node *temp = start;
    printf("");
/*Tried to organize print in rows using a loop of 
counts and columns and use the remainder operator 
to detect when a new line is needed.*/
    while (temp!=NULL){
        for (int i = 0; i < count; i++){
            printf(" %9d", temp->data);
            temp = temp->next;

            if ((i % columns) == 9){
            printf("\n");
            }
        }
    }
}

//Bubble sort the given linked list 
void bubbleSort(struct Node *start)
{
    int swapped, i;
    struct Node *ptr1;
    struct Node *lptr = NULL;

    //Checking for empty list 
    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}

//Swap data of two nodes a and b
void swap(struct Node *a, struct Node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}