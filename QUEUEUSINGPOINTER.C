//6
#include <stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100
//defineing the queue structure
typedef struct 
{
    int items[MAX_SIZE];
    int front;
    int rear;
} 
Queue;
void initializeQueue(Queue* q) 
{
    q->front = -1;
    q->rear = 0;
}
bool isempty(Queue* q) 
{
    return (q->front == q->rear - 1);
}
bool isfull(Queue* q) 
{
    return (q->rear == MAX_SIZE);
}
void enqueue(Queue* q, int value) 
{
    if (isfull(q)) 
    {
        printf("Queue is full\n");
        return;
    } 
    
    
        q->items[q->rear++] = value;
        //q->rear++; // Increment rear after adding an item
    
    }
    void dequeue(Queue* q) 
    {
    if (isempty(q)) 
    {   
        printf("Queue is empty\n");
        return;
    }

        q->front++; // Increment front after removing an item
        
    } 
    
    int peek(Queue* q) 
    {
    if (isempty(q)) 
    {
        printf("Queue is empty\n");
        return -1;// Indicating empty queue
      }  return q->items[q->front + 1]; // Return the front item without removing it
    
    }
void printQueue(Queue* q) 
{
    if (isempty(q)) 
    {
        printf("Queue is empty\n");
        return;
    }
    printf("current queue: ");
    for (int i = q->front + 1; i < q->rear; i++) 
    {
        printf("%d ", q->items[i]);
    }

printf("\n");
}

    int main() 
    {
    Queue q;    
    initializeQueue(&q);
    enqueue(&q, 10);
    printQueue(&q);
    enqueue(&q, 20);
    printQueue(&q);
    enqueue(&q, 30);
    printQueue(&q);
    printf("front element: %d\n", peek(&q));
    dequeue(&q);
    printQueue(&q);
    printf("front element after dequeue: %d\n", peek(&q));
    return 0;

}
