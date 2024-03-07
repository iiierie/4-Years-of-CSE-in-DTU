#include<iostream>
using namespace std;
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
};
int main(){
    node* n1 = new node;
        n1->left = NULL;
        n1->right = NULL;
        n1->data = 15;

 return 0;
}