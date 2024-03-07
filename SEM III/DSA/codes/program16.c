#include<stdio.h>
#include<stdlib.h>
//structure node  for tree containing one data ani left and right node pointers
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

//function to create new node which takes data as argument and return the created node
node* createnode(int value){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}
//in-order traversal
void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int main(){
    node* p =  createnode(100);
    node* p2 = createnode(25);
    node* p3 = createnode(75);
    node* p4 = createnode(15);
    node* p5 = createnode(35);
    node* p6 = createnode(85);

p->left = p2; //linking p2 to left of p1 
p->right = p3; // linking p3 to left of p1
p2->left = p4;
p2->right = p5;
p3->right = p6;


inorder(p);
printf("\n");
return 0;
}



/*
    100
   / \
  25   75
 / \   \
15  35    85

*/