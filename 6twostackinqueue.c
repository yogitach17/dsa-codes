//6  wap in c to implement a queue using stack .
#include<stdio.h>
#include<stdlib.h>
void push1();
void push2();
void pop1();
void pop2();
void enqueue();
void dequeue();
void display();

int str1[100],str2[100],top1=-1,top2=-1;
int count =0;
int main(){
    int ch;

    while(1){
         printf("\n 1 - enqueue element into queue");
    printf("\n 2 - dequeue element from queue");
    printf("\n 3 - display from queue");
    printf("\n 4 - exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
void push1(){
    int value;
    if(top1 == 99){
        printf("Stack 1 is full\n");
    } else {
        printf("Enter value to push into stack 1: ");
        scanf("%d", &value);
        str1[++top1] = value;
    }
}
void pop1(){
    int value;
         str1[top1--];
}
void push2(){
    
    str2[++top2]= str1[top1--];
}
void pop2(){
    if(top2 == 99){
        printf("Stack 2 is full\n");
    } else {
        printf("value in queue is %d\n", str2[top2--]);
    }
}
void enqueue(){
    if(top1 == 99){
        printf("Queue is full\n");
    } else {
        push1();
        count++;
    }
}
void dequeue(){
    if(top2 == -1){
        if(top1 == -1){
            printf("Queue is empty\n");
        } 
        else { while ((top1!=-1))
        {
            push2();
              }
        }
    }
    pop2();
    count--;
}
void display(){
    if(top1 == -1 && top2 == -1){
        printf("Queue is empty\n");
    } else {
        printf("Elements in queue: ");
        for(int i = 0; i <= top2; i++){
            printf("%d ", str2[i]);
        }
        for(int j = 0; j <= top1; j++){
            printf("%d ", str1[j]);
        }
        printf("\n");
    }
}
    
/*   OUTPUT 
 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 1
Enter value to push into stack 1: 10

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 1
Enter value to push into stack 1: 20

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 3
Elements in queue: 10 20 

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 1
Enter value to push into stack 1: 10

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 2
value in queue is 10

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice:4

*/

/*1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 1
Enter value to push into stack 1: 10

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 1
Enter value to push into stack 1: 20

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 1
Enter value to push into stack 1: 30

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 2
value in queue is 10

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 3
Elements in queue: 30 20

 1 - enqueue element into queue
 2 - dequeue element from queue
 3 - display from queue
 4 - exit
Enter your choice: 4*/