#include <iostream>
#include <climits>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
};


int findMax(Node* root)
{
    // Base case
    if (root == NULL)
        return INT_MIN;
 
    // Return maximum of 3 values:
    // 1) Root's data 2) Max in Left Subtree
    // 3) Max in right subtree
    int res = root->data;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    if (lres > res)
        res = lres;
    if (rres > res)
        res = rres;
    return res;
}
 

 
int findMin(Node *root)
	{
		//code
		if(root==NULL)
	{
		return INT_MAX;
	}
	int res=root->data;
	int left=findMin(root->left);
	int right=findMin(root->right);
	if(left<res)
	{
		res=left;
	}
	if(right<res)
	{
		res=right;
	}
	return res;
	}

//function to create new Node which takes data as argument and return the created Node
Node* createNode(int value){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
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
cout<<"MIN: "<<findMin(p)<<endl;
cout<<"MAX: "<< findMax(p)<<endl;
return 0;
}
