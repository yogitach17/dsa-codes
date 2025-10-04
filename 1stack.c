//exp 1 : wap in c to design a stack
#include<stdio.h>
#include<conio.h>
void push();
void pop();
void peek();
int stack[20],top=-1,n,option=0;
void main()
{
   
    printf("enter no of value in stack\n");
    scanf("%d",&n);
    printf("stack implementation using array\n");
    while(option!=4)
    { printf("choose one from below option\n");
    printf("1.push\n2.pop\n3.peek\n4.exit\n");
scanf("%d",&option);
switch(option)
{
case 1: push();
break;
case 2: pop();
break;
case 3: peek();
break;
case 4: printf("exiting");
break;
default: printf("please enter valid option");
}}
getch();
}
void push(){
    int value;
    if(top==n)
    {
        printf("overflow\n");
        }
        else{
             printf("enter value");
             scanf("%d",&value);
             top=top+1;
             stack[top]=value;
        }}
        void pop(){
            int value;
            if (top==-1)
            { printf("underflow\n");
            }
            else {
                value=stack[top];
                top=top-1;

            }
        }
        void peek(){
        int value;
        value=stack[top];
    printf("%d\n",value);        }

    /*enter no of value in stack
2
stack implementation using array
choose one from below option
1.push
2.pop
3.peek
4.exit
1
enter value10
choose one from below option
1.push
2.pop
3.peek
4.exit
1
enter value20
choose one from below option
1.push
2.pop
3.peek
4.exit
3
20
choose one from below option
1.push
2.pop
3.peek
4.exit
2
choose one from below option
1.push
2.pop
3.peek
4.exit
3
10
choose one from below option
1.push
2.pop
3.peek
4.exit
*/