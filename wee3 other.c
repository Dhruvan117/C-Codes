<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#define N 100 // number of integers to generate

//type define linkedList as struct
typedef struct linkedList{
    int data;
    linkedList *next;
}linkedList;

// bubblesort by reassigning pointers
// slightly more of a challenge than simply swapping the data
linkedList * bubbleSort(linkedList *head){
    linkedList *cur;
    linkedList *curNext;
    linkedList *prev;
    bool swapped = true;
    while(swapped){
        cur = head;
        swapped = false;
        // while cur is not the last item in list and still has a valid next
        while(cur->next!=NULL){           
            // if data of cur>data of next, swap 
            if(cur->data > (curNext = cur->next)->data){
                cur->next = curNext->next;
                curNext->next = cur;
                // if first element swapped places, head must be reassigned to new first element
                if(head==cur) head = curNext;
                // if not first element, prev will not be NULL
                // and prev->next needs to now point to the newly swapped backwards element
                else prev->next = curNext;
                prev = curNext;
                // indicate a swap has occured, and thus continue bubbling
                swapped = true;
            }else{
                // else if no swap needed, move to next element
                prev = cur;
                cur = cur->next;
            }
        }
    }
    // since head might swapped to be a new pointer
    // return the possible new head
    return head;
}

// insert new data to front of list, return new head
linkedList * insertFront(int data, linkedList *next){
    linkedList *newHead = (linkedList*) malloc(sizeof(linkedList));
    newHead->data = data;
    newHead->next = next;
    return newHead;
}

//function print list out more easily
void printList(linkedList *head){
    linkedList *cur = head;
    int counter =1;
    while(cur!=NULL){

        printf("%3d ",cur->data);
        cur = cur->next;
        //linebreak every 5 items
        if(counter++%5==0)printf("\n");
    }
    printf("\n");
}


int main(void){
    // generate list
    linkedList *head = NULL;
    for(int i=0;i<N;i++){
        head = insertFront(rand()%1000,head);
    }
    // print out initial, unsorted state of list
    printf("Unsorted list:\n");
    printList(head);

    //execute bubblesort on list
    head = bubbleSort(head);
    printf("Sorted list:\n");
    printList(head);

    
    return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#define N 100 // number of integers to generate

//type define linkedList as struct
typedef struct linkedList{
    int data;
    linkedList *next;
}linkedList;

// bubblesort by reassigning pointers
// slightly more of a challenge than simply swapping the data
linkedList * bubbleSort(linkedList *head){
    linkedList *cur;
    linkedList *curNext;
    linkedList *prev;
    bool swapped = true;
    while(swapped){
        cur = head;
        swapped = false;
        // while cur is not the last item in list and still has a valid next
        while(cur->next!=NULL){           
            // if data of cur>data of next, swap 
            if(cur->data > (curNext = cur->next)->data){
                cur->next = curNext->next;
                curNext->next = cur;
                // if first element swapped places, head must be reassigned to new first element
                if(head==cur) head = curNext;
                // if not first element, prev will not be NULL
                // and prev->next needs to now point to the newly swapped backwards element
                else prev->next = curNext;
                prev = curNext;
                // indicate a swap has occured, and thus continue bubbling
                swapped = true;
            }else{
                // else if no swap needed, move to next element
                prev = cur;
                cur = cur->next;
            }
        }
    }
    // since head might swapped to be a new pointer
    // return the possible new head
    return head;
}

// insert new data to front of list, return new head
linkedList * insertFront(int data, linkedList *next){
    linkedList *newHead = (linkedList*) malloc(sizeof(linkedList));
    newHead->data = data;
    newHead->next = next;
    return newHead;
}

//function print list out more easily
void printList(linkedList *head){
    linkedList *cur = head;
    int counter =1;
    while(cur!=NULL){

        printf("%3d ",cur->data);
        cur = cur->next;
        //linebreak every 5 items
        if(counter++%5==0)printf("\n");
    }
    printf("\n");
}


int main(void){
    // generate list
    linkedList *head = NULL;
    for(int i=0;i<N;i++){
        head = insertFront(rand()%1000,head);
    }
    // print out initial, unsorted state of list
    printf("Unsorted list:\n");
    printList(head);

    //execute bubblesort on list
    head = bubbleSort(head);
    printf("Sorted list:\n");
    printList(head);

    
    return 0;
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
#include <stdio.h>
#include <stdlib.h>
#define N 100 // number of integers to generate

//type define linkedList as struct
typedef struct linkedList{
    int data;
    linkedList *next;
}linkedList;

// bubblesort by reassigning pointers
// slightly more of a challenge than simply swapping the data
linkedList * bubbleSort(linkedList *head){
    linkedList *cur;
    linkedList *curNext;
    linkedList *prev;
    bool swapped = true;
    while(swapped){
        cur = head;
        swapped = false;
        // while cur is not the last item in list and still has a valid next
        while(cur->next!=NULL){           
            // if data of cur>data of next, swap 
            if(cur->data > (curNext = cur->next)->data){
                cur->next = curNext->next;
                curNext->next = cur;
                // if first element swapped places, head must be reassigned to new first element
                if(head==cur) head = curNext;
                // if not first element, prev will not be NULL
                // and prev->next needs to now point to the newly swapped backwards element
                else prev->next = curNext;
                prev = curNext;
                // indicate a swap has occured, and thus continue bubbling
                swapped = true;
            }else{
                // else if no swap needed, move to next element
                prev = cur;
                cur = cur->next;
            }
        }
    }
    // since head might swapped to be a new pointer
    // return the possible new head
    return head;
}

// insert new data to front of list, return new head
linkedList * insertFront(int data, linkedList *next){
    linkedList *newHead = (linkedList*) malloc(sizeof(linkedList));
    newHead->data = data;
    newHead->next = next;
    return newHead;
}

//function print list out more easily
void printList(linkedList *head){
    linkedList *cur = head;
    int counter =1;
    while(cur!=NULL){

        printf("%3d ",cur->data);
        cur = cur->next;
        //linebreak every 5 items
        if(counter++%5==0)printf("\n");
    }
    printf("\n");
}


int main(void){
    // generate list
    linkedList *head = NULL;
    for(int i=0;i<N;i++){
        head = insertFront(rand()%1000,head);
    }
    // print out initial, unsorted state of list
    printf("Unsorted list:\n");
    printList(head);

    //execute bubblesort on list
    head = bubbleSort(head);
    printf("Sorted list:\n");
    printList(head);

    
    return 0;
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}