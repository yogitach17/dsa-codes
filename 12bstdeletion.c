// bst deletion
#include<stdio.h>
#include<stdlib.h>
struct node {
    int key;
    struct node*left ;
    struct node *right ;
};
struct node * dellterative(struct node* root,int key){

    struct node *curr = root;
    struct node* prev =NULL;
    while (curr!=NULL && curr->key != key) {
        prev = curr;
        if (key < curr->key) {
            curr = curr->left;
        } else {
            curr = curr->right;
        }}
        if(curr ==NULL)
        return root;
        if(curr -> left == NULL || curr -> right == NULL ){
            struct node * newcurr ;
            if (curr -> left == NULL)
            newcurr = curr -> right;
            else
            newcurr = curr -> left;
            if (prev == NULL) 
            if ( curr == prev -> left )
            prev -> left = newcurr ;
            else 
            prev -> right = newcurr;
            free (curr);
        }
        else{
            struct node*p=NULL;
            struct node *temp = curr -> right;
            while (temp->left != NULL) {
             p=temp;
             temp=temp->left ;
            }
            if(p!=NULL)
            p->left =temp->right;
            else
            curr->right = temp->right;
            curr->key = temp->key;
            free(temp);
        }
        return root;
    }
    void inorder (struct node* root) {
        if (root != NULL) {
            inorder(root->left);
            printf("%d ", root->key);
            inorder(root->right);
        }
    }
    struct node*createnode(int key) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->key = key;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
    int main(){
        struct node*root=createnode(10);
        root->left=createnode(5);
        root->right=createnode(15);
        root->right->left=createnode(12);
        root->right ->right =createnode(18);
        int x=15;
        root=dellterative(root,x);
        inorder(root);
        return 0;
    }

//5 10 12 18 