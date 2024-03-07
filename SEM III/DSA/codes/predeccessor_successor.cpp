
#include<iostream>
#include<stdlib.h>
using namespace std;
//structure Node  for tree containing one data ani left and right Node pointers
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

//function to create new Node which takes data as argument and return the created Node
Node* createNode(int value){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}


//in-order traversal
void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int data)
{
    // Base case
    if (root == NULL)  return ;
 
    // If data is present at root
    if (root->data == data)
    {
        // the maximum value in left subtree is predecessor
        if (root->left != NULL)
        {
            Node* tmp = root->left;
            while (tmp->right!= NULL)
                tmp = tmp->right;
            pre = tmp ;
        }
 
        // the minimum value in right subtree is successor
        if (root->right != NULL)
        {
            Node* tmp = root->right ;
            while (tmp->left)
                tmp = tmp->left ;
            suc = tmp ;
        }
        return ;
    }
 
    // If data is smaller than root's data, go to left subtree
    if (root->data > data)
    {
        suc = root ;
        findPreSuc(root->left, pre, suc, data) ;
    }
    else // go to right subtree
    {
        pre = root ;
        findPreSuc(root->right, pre, suc, data) ;
    }
}

int main(){
    Node* p = createNode(100);
    Node* p2 = createNode(25);
    Node* p3 = createNode(75);
    Node* p4 = createNode(15);
    Node* p5 = createNode(35);
    Node* p6 = createNode(85);

p->left = p2; //linking p2 to left of p1 
p->right = p3; // linking p3 to left of p1
p2->left = p4;
p2->right = p5;
p3->right = p6;
Node* pre = NULL;
Node* suc = NULL;
findPreSuc(p,pre,suc,25);
cout<<"Preorder predecessor: "<< pre->data<<endl;
cout<<"Preorder successor: "<<suc->data<<endl;


printf("\n");
inorder(p);

return 0;
}



/*
    100
   / \
  25   75
 / \   \
15  35    85

*/


