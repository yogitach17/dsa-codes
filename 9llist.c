//program 9 insertion before first node
#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*header;
void Beginningnode(int data) {
    struct node newnode = (struct node)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Unable to allocate memory\n");
        return;
    }
    
    newnode->data = data;
    newnode->next = header;
    header = newnode;
}

void createlist(int n);
int main()
{
    int n;
 printf("Enter the number of nodes: ");
    scanf("%d", &n);
   
createlist(n);
    int newData;
    printf("Enter data to insert at beginning: ");
    scanf("%d", &newData);
    Beginningnode(newData);
    printf("after inserting the node ");
    displaylist();
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
temp=newnode;}
for(i=2;i<=n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
    printf("unable to allocate memory");
    break;
}
else{
    printf("enter the data of node%d:",i);
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    temp->next=newnode;
    temp=temp->next;
} 
 }
   }void displaylist() {
    struct node *temp = header;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
//Enter the number of nodes: 3
//enter the data of node1:27
//enter the data of node2:36
//enter the data of node3:29
//Enter data to insert at beginning: 10
//after inserting the node Linked list: 10 27 36 29
