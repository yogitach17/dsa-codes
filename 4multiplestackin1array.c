// p 4 wap in c to design multistack in one array .
#include<stdio.h>
 void peek();
 void push();
 void pop();
 int stack[100],n,top1=-1,top2,top3,top4,option=0;

 int main()
 {
    printf("Enter the number of element in the stack: ");
    scanf("%d",&n);
    top2=(n/4);
    top3=(n/2);
    top4=(n*3)/4;
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
    int value1,value2,value3,value4,a;
    printf("Select Option...\n1. for 1st stack\n2. for 2nd stack\n3. for 3rd stack \n 4. for 4th stack\n");
    scanf("%d",&a);
    if(a==1){
    printf("Stack 1st.....\n");
    if(top1==((n/4)-1))
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
    if(top2==(n/2)-1)
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

           if(a==3){
    printf("\nStack 3rd.....\n");
    if(top3=(n*3/4)-1)
    {
        printf("\n->> Over Flow\n");
    }
    else
    {
        printf("Enter A value : ");
        scanf("%d",&value3);
        top3++;
        stack[top3]=value3;
    }
           }

           if(a==4){
    printf("\nStack 4th.....\n");
    if(top4=(n-1))
    {
        printf("\n->> Over Flow\n");
    }
    else
    {
        printf("Enter A value : ");
        scanf("%d",&value4);
        top4++;
        stack[top4]=value4;
    }
           }

        }
 void pop() 
 {
    int a;
      printf("Select Option...\n1. for 1st stack\n2. for 2nd stack\n 3. for 3rd stack \n 4. for 4th stack\n");
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
             if(top2==(n/4)-1) {
             printf("\n->> Empty....\n");}
    else {
        printf("Popped value is %d\n",stack[top2]);
        top2--;}
       }

       if(a==3){
    printf("Stack 3rd.....\n");
    if(top3==(n/2)-1){
        printf("\n->> Empty....\n");}
    else {
        printf("Popped value is %d\n",stack[top3]);
        top3--;}
     }

     if(a==4){
    printf("Stack 4th.....\n");
    if(top4==(n*3/4)-1){
        printf("\n->> Empty....\n");}
    else {
        printf("Popped value is %d\n",stack[top4]);
        top4--;}
     }
 }
 void peek()
 {  int a;
      printf("Select Option...\n1. for 1st stack\n2. for 2nd stack\n3. for 3rd stack \n 4. for 4th stack\n");
    scanf("%d",&a);
    if(a==1){
             printf("Stack 1st.....\n");
             printf("Peek value of 1st stack is %d and top=%d",stack[top1],top1);
            }
    if(a==2){
            printf("\nStack 2st.....\n");
            printf("Peek value of 2nd stack is %d and top=%d",stack[top2],top2);
            }

            if(a==3){
             printf("Stack 3rd.....\n");
             printf("Peek value of 1st stack is %d and top=%d",stack[top3],top3);
            }
    if(a==4){
            printf("\nStack 4th.....\n");
            printf("Peek value of 2nd stack is %d and top=%d",stack[top4],top4);
            }}

            /*Enter the number of element in the stack: 100

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
3. for 3rd stack
 4. for 4th stack
1
Stack 1st.....
Enter A value : 17

Chose one form the below option....
1.Push
2.Pop
3.Peek
4.Exit
Enter your option: 1
Select Option...
1. for 1st stack
2. for 2nd stack
3. for 3rd stack
 4. for 4th stack
2

Stack 2st.....
Enter A value : 100

Chose one form the below option....
1.Push
2.Pop
3.Peek
4.Exit
Enter your option: 3
Select Option...
1. for 1st stack
2. for 2nd stack
3. for 3rd stack
 4. for 4th stack
1
Stack 1st.....
Peek value of 1st stack is 17 and top=0
Chose one form the below option....
1.Push
2.Pop
3.Peek
4.Exit
Enter your option: 4
You are Exit
*/