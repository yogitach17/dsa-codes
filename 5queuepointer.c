//5 wap in c to design a queue using structure.
#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100
// DEFINING THE QUEUE STRUCTURE 
typedef struct {
    int items [MAX_SIZE];
    int front;
    int rear;
    } queue;
    void initialisequeue (queue* q){
    q->front = -1;
    q->rear = 0;
    }
    bool isempty (queue* q) {
return ( q->front == q -> rear - 1);
    }
    bool isfull (queue* q) {
return (q->rear == MAX_SIZE);
    }
    void enqueue (queue* q, int value)   
        {
    if (isfull(q)) {
        printf("Queue is full\n");
        return;
        }
        q->items[q->rear] = value;
        q->rear++;
    }
void dequeue(queue* q) {
    if (isempty(q)) {
        printf("Queue is empty\n");
        return;
    }
    q->front++;
    printf("Dequeued value: %d\n", q->items[q->front]);
}

int  peek(queue* q) {
    if (isempty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->items[q->front + 1];
}
void printqueue (queue *q) {

    if (isempty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("current queue: ");
    for (int i = q->front + 1; i < q->rear; i++) {
        printf("%d ", q->items[i]);
    }
printf("\n");
   
}

int main()
{int n;
    queue *q;
    initialisequeue(&q);
    enqueue(&q, 10);
    printqueue(&q);
    enqueue(&q, 20);
    printqueue(&q);
    enqueue(&q, 30);
    printqueue(&q);
    printf("front element : %d\n", peek(&q));
    dequeue(&q);
    printqueue(&q);
    printf("front element after deque :%d/n", peek(&q));
   
    return 0;

}
