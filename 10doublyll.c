//10 DOUBLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node {int data;
struct node * prev;

struct node * next;
}*head, *last;
int main()
{
    int n,data;
    head=NULL;
    last=NULL;
    printf("enter the total number of nodes in list: ");
    scanf("%d",&n);
    createlist(n);
    displaylist();
    printf("enter the position and data to insert new node: ");
    scanf("%d %d",&n ,&data);
    insert_position(data,n);
    displaylist();
    return 0;
}
void createlist(int n){
  int i,data;
  struct node *newNode;
  if(n>1){
    head=(struct node*)malloc(sizeof(struct node));
    printf("enter data of node 1: ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    head->prev=NULL;
    last=head;
    for(i=2;i<=n;i++){
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("enter data of %d node",i);
        scanf("%d",&data);
        newNode->data=data;
        newNode->prev=last;
        newNode->next=NULL;
        last->next=newNode;
        last=newNode;
    }
    printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
  }
}
void insert_position(int data,int position)
{
    struct node*newNode,*temp;
    if(head==NULL){
        printf("Error,list is empty!\n");
    }
    else{
        temp=head;
        if(temp!=NULL){
            newNode=(struct node*)malloc(sizeof(struct node));
            newNode->data=data;
            newNode->next=temp->next;
            newNode->prev=temp;
            if(temp->next!=NULL){
                temp->next->prev=newNode;
            }
            temp->next=newNode;
            printf("NODE INSERTED SUCCESSFULLY AT %d POSITION\n",position);
        }
        else{
            printf("error,invalid position\n");
        }
    }
}
void displaylist(){
    struct node*temp;
    int n=1;

    if(head==NULL){
        printf("List is empty\n");
    }
    else{
        temp=head;
        printf("DATA IN THE LIST:\n");

        while(temp!=NULL){
            printf("DATA of %d node=%d\n",n,temp->data);
            n++;
            temp=temp->next;
        }
    }
}
/*enter the total number of nodes in list: 2
enter data of node 1: 10
enter data of 2 node20

DOUBLY LINKED LIST CREATED SUCCESSFULLY
DATA IN THE LIST:
DATA of 1 node=10
DATA of 2 node=20
enter the position and data to insert new node: 2
30
NODE INSERTED SUCCESSFULLY AT 2 POSITION
DATA IN THE LIST:
DATA of 1 node=10
DATA of 2 node=30
DATA of 3 node=20
*/
