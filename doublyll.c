#include<stdio.h>
#include<stdlib.h>
struct node {int data ;
struct node * prev ;
struct node * next;
} *head,*last;
int main()
{
    int n, data ;
    head=   NULL;
    last=NULL;
    printf("enter total no of nodes in the list ");
    scanf("%d",&n);
    createlist(n);
    displaylist();
    printf("enter the position and data to insert new code:");
    scanf("%d%d",&n,&data);
    insert_position(data,n);
    displaylist();
    return 0;
}
void createlist(int n)
{
    int i,data;
    struct node *newnode;
    if(n>=1){
        head = (struct node *)malloc (sizeof (struct node));
        printf("enter the data of  1 node ");
        scanf("%d",&data);
        head->data=data;
        head->prev=NULL;
        head->next=NULL;
        last = head ;
        for(i=0;i<=n;i++){
            newnode=(struct node*) malloc(sizeof(struct node));
            printf("enter the data of %d node:",i);
            scanf("%d",&data);
            newnode->data=data;
            newnode->prev=last;
            newnode->next=NULL;
            last->next=newnode;
            last=newnode;
        }
        printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY");
    }
}
