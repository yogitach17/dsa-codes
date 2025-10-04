// 3. wap in c to design two stack in one array
#include<stdio.h>
 void peek();
 void push();
 void pop();
 int stack[50],n,top1=-1,top2,option=0;

 int main()
 {
    printf("Enter the number of element in the stack: ");
    scanf("%d",&n);
    top2=(n/2)-1; 
    printf("\n---Stack Implementation using Array---\n");

    while(option!=4)
    {
        printf("\nChose one form the below option....\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.Exit\n");
        printf("Enter your option: ");
        scanf("%d",&option);

        switch(option)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: printf("You are Exit");
            break;
            default: printf("Invalid!!! Option");
        }
    }
    return 0;
 }

 void push()
 {
    int value1,value2,a;
    printf("Select Option...\n1. for 1st stack\n2. for 2nd stack\n");
    scanf("%d",&a);
    if(a==1){
    printf("Stack 1st.....\n");
    if(top1==((n/2)-1))
    {
        printf("\n->> Over Flow\n");
    }
    else
    {
        printf("Enter A value : ");
        scanf("%d",&value1);
        top1++;
        stack[top1]=value1;
    }}
    if(a==2){
    printf("\nStack 2st.....\n");
    if(top2==(n-1))
    {
        printf("\n->> Over Flow\n");
    }
    else
    {
        printf("Enter A value : ");
        scanf("%d",&value2);
        top2++;
        stack[top2]=value2;
    }
           }

 }
 void pop() 
 {
    int a;
      printf("Select Option...\n1. for 1st stack\n2. for 2nd stack\n");
    scanf("%d",&a);
    if(a==1){
    printf("Stack 1st.....\n");
    if(top1==-1){
        printf("\n->> Empty....\n");}
    else {
        printf("Popped value is %d\n",stack[top1]);
        top1--;}
     }
    if(a==2){
             printf("\nStack 2st.....\n");
             if(top2==(n/2)-1) {
             printf("\n->> Empty....\n");}
    else {
        printf("Popped value is %d\n",stack[top2]);
        top2--;}
       }
 }
 void peek()
 {  int a;
      printf("Select Option...\n1. for 1st stack\n2. for 2nd stack\n");
    scanf("%d",&a);
    if(a==1){
             printf("Stack 1st.....\n");
             printf("Peek value of 1st stack is %d and top=%d",stack[top1],top1);
            }
    if(a==2){
            printf("\nStack 2st.....\n");
            printf("Peek value of 2nd stack is %d and top=%d",stack[top2],top2);
            }
 }

 /*Enter the number of element in the stack: 50

---Stack Implementation using Array---

Chose one form the below option....
1.Push
2.Pop
3.Peek
4.Exit
Enter your option: 1
Select Option...
1. for 1st stack
2. for 2nd stack
1
Stack 1st.....
Enter A value : 10

Chose one form the below option....
1.Push
2.Pop
3.Peek
4.Exit
Enter your option: 1
Select Option...
1. for 1st stack
2. for 2nd stack
2

Stack 2st.....
Enter A value : 20

Chose one form the below option....
1.Push
2.Pop
3.Peek
4.Exit
Enter your option: 3
Select Option...
1. for 1st stack
2. for 2nd stack
1
Stack 1st.....
Peek value of 1st stack is 10 and top=0
Chose one form the below option....
1.Push
2.Pop
3.Peek
4.Exit
Enter your option: 3
Select Option...
1. for 1st stack
2. for 2nd stack
2

Stack 2st.....
Peek value of 2nd stack is 20 and top=25
Chose one form the below option....
1.Push
2.Pop
3.Peek
4.Exit
Enter your option: 4
You are Exit
*/