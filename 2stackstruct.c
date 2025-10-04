#include<stdio.h>
#include<conio.h>
struct stack{
    int  stack[50];
    int top;
} st;
void peek();
void pop();
void push();
int n, option=0;
int main()
{
    st.top=-1;
    printf("enter the no of element in the stack:");
    scanf("%d",&n);
    printf("\n--- stack implementation using array---\n");
    while(option!=4)
    {
        printf("\n choose one from the below option---\n");
        printf("1.push\n2.pop\n3.peek\n4,exit\n");
        printf("enter your option ");
        scanf("%d",&option);
               switch(option)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: printf("you are exited ");
            break;
            default: printf("invalid!!!option");
        }}
        return 0;}
        void push(){
            int value;
            if (st.top==(n-1)){
                printf("\n->> over flow \n");
                        }
                    else {
                        printf("enter a value:");
                        scanf("%d",&value);
                        st.top++;
                        st.stack[st.top]=value;
                    }            }
                    void pop(){
                        if(st.top=-1){
                            printf("\n->>empty---\n");}
                            else{
                                printf("popped value is %d\n",st.stack[st.top]);
                                st.top--;
                            }
                    }
                    void peek()
                    {printf("peek value is %d and top=%d",st.stack[st.top],st.top );
                    }
        
        /*enter the no of element in the stack:3

--- stack implementation using array---

 choose one from the below option---
1.push
2.pop
3.peek
4,exit
enter your option 1
enter a value:29

 choose one from the below option---
1.push
2.pop
3.peek
4,exit
enter your option 3
peek value is 29 and top=0
 choose one from the below option---
1.push
2.pop
3.peek
4,exit
enter your option 4
you are exited
*/