// 11 wap in c for binary search tree & traversal.
#include<stdio.h>
#include<stdlib.h>
struct tree{
    struct tree* left;
    int val;
    struct tree* right;
};

struct tree* insertnode(struct tree* root,int val){
    if (root == NULL) {
        struct tree* temp = (struct tree*)malloc(sizeof(struct tree));
        temp->val = val;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (val < root->val) {
        root->left = insertnode(root->left, val);
    } else if (val > root->val) {
        root->right = insertnode(root->right, val);
    }
    return root;
}

void inorder(struct tree* root){
    if(root == NULL){
       return;
    }
    inorder(root->left);
    printf("%d ",root->val);
    inorder(root->right);
}
void Preorder(struct tree* root){
     if(root == NULL){
        return;
    }
    printf("%d ",root->val);
    Preorder(root->left);
    Preorder(root->right);
}
void postorder(struct tree* root){
     if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
     printf("%d ",root->val);
}

struct tree* search(struct tree* root,int key){
    if(root == NULL || root->val == key){
        return root;
    }
    if(key < root->val){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }
}

int main(){
    struct tree* root = NULL;
    root = insertnode(root,50);
    insertnode(root,34);
    insertnode(root,89);
    insertnode(root,20);
    insertnode(root,40);
    insertnode(root,70);
    insertnode(root,100);
   
   printf("inorder tree data : ");
   inorder(root);
   printf("\nPreorder tree data : ");
    Preorder(root);
    printf("\nPostorder tree data : ");
    postorder(root);
int key = 89;
  struct tree* result = search(root,key);
  if(result != NULL){
    printf("\n%d found in BST",key);
  }else{
    printf("\n%d is not in BST",key);
  }}

  /*inorder tree data : 20 34 40 50 70 89 100 
Preorder tree data : 50 34 20 40 89 70 100
Postorder tree data : 20 40 34 70 100 89 50
89 found in BST
*/