#include <stdio.h>
#include <stdlib.h>
#include<queue>
using namespace std;
typedef struct node{
    int value;
    struct node* left;
    struct node* right;
}node;

int count_internal_nodes(node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left == NULL && root->right ==NULL){
        return 0;
    }
    return 1+count_internal_nodes(root->left)+count_internal_nodes(root->right);
}


//if node null return 0 if left null right null return 1 and repeat same for root->left and root->right;
int count_leafnodes(node* root){
     if ( root == NULL){
        return 0;
    }
    if( root->left == NULL && root->right == NULL){
        return 1;
    }
    return count_leafnodes(root->left) + count_leafnodes(root->right);
}


node* createnode(int data){
    node* new_node = (node*)malloc(sizeof(node));
    new_node->value = data;
    new_node->right = NULL;
    new_node->left = NULL;
    return new_node;
}

void inorder(node* root){
    if ( root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d ", root->value);
    inorder(root->right);
}

void preorder(node* root){
    if ( root == NULL){
        return;
    }
    printf("%d ", root->value);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if ( root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->value);
}


void levelorder(node* root){
    if ( root == NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
    int size =  q.size();
    for(int i = 0; i<size; i++){
        node* temp = q.front();
        printf("%d ",temp->value);
        q.pop();
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
    printf("\n ");
    }
}

int main()
{
    node* root = createnode(1);
    node* a = createnode(2);
    node* b = createnode(3);
    node* c = createnode(4);
    node* d = createnode(5);
    root->left = a;
    root->right = b;
    a->left = c;
    b->right = d;
    // inorder(root);
    levelorder(root);
    printf("%d ",count_internal_nodes(root));
    return 0;
}
