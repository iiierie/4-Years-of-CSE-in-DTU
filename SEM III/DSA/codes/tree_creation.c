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

//preorder traversal
void preorder(node* root){
    if(root!= NULL){
        printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    }
}

//postorder traversal
void postorder(node* root){
    if(root!= NULL){
        postorder(root->left);
        postorder(root-> right);
        printf("%d ",root->data);
    }
}  

//in-order traversal
void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}


//checking if BST or not
int is_bst(node* root){
    static node* prev = NULL; // so that it gets updated again and again in single memory 
   //first check if tree is empty or not
    if(root != NULL){ 
        //check for left if left bst haina vane return 0 gardine sidhai
         if(!is_bst(root->left)){
            return 0;
        }
        //inorder ma chai agadi ko thulo xa paxadi ko vanda vane nope not a bst
        //root->data naya naya element paudai grxa ani check grne thulo xa ki nai paila ko vanda
        if(prev != NULL && root->data <= prev->data){
            return 0;
        }
        //update prev as root
        prev = root;
        //check for right
        return is_bst(root->right);
    }     
    else{
        return 1; // if tree khali then consider bst and return 1
    }
}


//functions to search for element 
 //recursive
  node* search_recur(struct node* root,int key){
    //first check if tree is empty or not
    if(root != NULL){
        //if matching
        if(key == root -> data){
            return root;
        }
        //search in left side
        if(key < root->data){
            search_recur(root->left,key);
        }
        //search in right sidde
        if(key > root->data){
            search_recur(root->right,key);
        }
    }
    //if empty return NULL
    else{
        return NULL;
    }
}

//iterative
 node* search_iterative(node* root, int key){
    while(root!= NULL){
     if(root->data == key){
        return root;
     }
     else if( root->data > key ){
        root = root->left;
     }
     else{
        root = root->right;
     }

    }
    return 0;
 }

 //time complexity of insertion : O(h)
//to insert new node
node* insertion(node* root, int key){
    struct node* p = root;//both pointing at root ani prev lai traverse grne 
while(p->left!=NULL || p->right!=NULL){
    //suru ma check if it already exists or not in tree //if yes then exit
    if(p->data == key){
        return 0;
    }
    //if not search left and right sides
    else if(key < p->data){
        p=p->left;
    }
    else{
        p=p->right;
    }
}
//prev now points to the node jasko child ma insert grne ho
node* new_node = createnode(key); // new node to insert
if(key > p -> data ){
    p->right = new_node;
}
else{
    p->left = new_node;

}
return root;
}
/* Given a binary search tree and a key, this function
deletes the key and returns the new root */
struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL)
        return root;
  
    // If the key to be deleted is 
    // smaller than the root's
    // key, then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);
  
    // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
  
    // if key is same as root's key, then This is the node
    // to be deleted
    else {
        // node has no child
        if (root->left==NULL && root->right==NULL)
            return NULL;
        
        // node with only one child or no child
        else if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
  
        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        struct node* temp = minValueNode(root->right);
  
        // Copy the inorder successor's content to this node
        root->data = temp->data;
  
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main(){
    node* p = createnode(100);
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

preorder(p);
printf("\n");
postorder(p);
printf("\n");
inorder(p);
printf("\n");
printf("%d", is_bst(p)); //1 if yes | 0 if no //
node* found = search_iterative(p,35);
printf("\n");
printf("%d found successfully \n ", found->data);
node* t = insertion(p,10);
inorder(t);
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