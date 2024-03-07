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

//inorder traversal
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

 
//to insert new node
void insert(node* root, int key){
    struct node* prev = NULL;
while(root!=NULL){
    prev = root; //both pointing at root ani prev lai traverse grne 
    //suru ma check if it already exists or not in tree //if yes then exit
    if(root->data == key){
        return;
    }
    //if not search left and right sides
    else if(key < root->data){
        root=root->left;
    }
    else{
        root=root->right;
    }
}
//prev now points to the node jasko child ma insert grne ho
node* new = createnode(key); // new node to insert
if(key > prev -> data ){
    prev->right = new;
}
else{
    prev->left = new;

}
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
printf("%d found successfully ", found->data);
insert(p,10);

return 0;
}



/*
    100
   / \
  25   75
 / \   \
15  35    85

*/