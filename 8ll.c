// program 8 create a linked list.
#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*header;
void createlist(int n);
int main()
{
    int n;
 printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createlist(n);
    return 0;}
    void createlist(int n)
{
    struct node *newnode, *temp;    
    int data, i =0;
    newnode=(struct node*)malloc(sizeof(struct node));
   if(newnode==NULL) 
   {
    printf("unable to allocate memory");
   }
   else{
    printf("enter the data of node1:");
    scanf("%d",&data);
newnode->data=data;
newnode->next=NULL;
header=newnode;
temp=newnode;
for(i=2;i<=n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode=NULL)
{
    printf("unable to allocate memory");
}
else{
    printf("enter the data of node%d:",i);
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    temp->next=newnode;
    temp=temp->next;
}  
 }}
   }

   /*Enter the number of nodes: 3
enter the data of node1:20
enter the data of node2:21*/