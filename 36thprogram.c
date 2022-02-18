#include<stdio.h>
#include<stdlib.h>
struct arrayqueue
{
    int front,rear;
    int capacity;
    int *array;
};

struct arrayqueue* createqueue(int cap)
{
    struct arrayqueue* q=malloc(sizeof(struct arrayqueue));
    if(!q)
    {
        return (NULL);
    }
    q->capacity = cap;
    q->front = q->rear = -1;
    q->array = malloc(q->capacity *sizeof(int));
    if (!q->array)
    {
        return(NULL);
    }
    return((struct arrayqueue *)q);
}

/*int isemptyqueue(struct arrayqueue *q)
{
    return(q->front==-1);
}

int isfullqueue()
{
    return((q->rear+1)%q->capacity==q->front);
}*/


/*int queuesize()
{
    return((q->capacity - q->front - q->rear + 1) % q-> capacity);
}

void enqueue(struct arrayqueue *q, int data)
{
    if (isfullqueue(q))
    {
        printf("overflow");
    }
    else
    {
        q->rear = (q->rear+1)%q->capacity;
        q->array[q->rear]=data;
        if(q->front==-1)
        {
            q->front=q->rear;
        }
    }
}*/

/*int dequeue(struct arrayqueue *q)
{
    int data = -1;
    if (isemptyqueue(q))
    {
        printf("queue is empty");
        return(-1);
    }
}
else
{
    data=q -> array[q->front];
    if(q -> front = q -> rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front = (q->front+1)%q->capacity;
    } 
}*/

/*void deletequeue(struct arrayqueue *q)
{
    if(q)
    {
        if(q->array)
        {
            free(q);
        }
    }

}*/

void main()
{
    struct arrayqueue s;
    s=*createqueue(4);
    printf("here is your %d",s.capacity);

}