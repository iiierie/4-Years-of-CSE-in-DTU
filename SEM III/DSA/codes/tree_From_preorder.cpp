#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
struct TreeNode
{
    TreeNode *left;
    TreeNode *right;
    int val;
    TreeNode();
    TreeNode(int a) : val(a){};
};

// input array linxa ani pointer for each element of that array ani upper bound linxa
TreeNode *build(vector<int> &A, int &i, int upper_bound)
{
    if (i == A.size() || A[i] > upper_bound)
        return NULL;                        // if array ko sabai element insert gari sakyo vane or insert grne element is bigger than upperbound
    TreeNode *root = new TreeNode(A[i++]);  // create a new node with value A[i]the element
    root->left = build(A, i, root->val);    // for left child upper bound is the root ko value
    root->right = build(A, i, upper_bound); // for right ko child upper bound is root ko upper bound
    return root;
}
TreeNode *bstFromPreorder(vector<int> &Array)
{
    int i = 0; // array ko first element
    return build(Array, i, INT_MAX);
}

void inorder(TreeNode *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

/*algo is suru ma queue maintain garne tesma one by one send garne node hru
first ma root push grne queue ma tespxi teslai pop ani print grne then root ko child xa vane teslai push grne ani repeat until the whole queue is empty;*/
void LevelOrderTraversal(TreeNode *root)
{
    if (root == NULL)
        return;
    queue<TreeNode *> q; // maintain a queue
    q.push(root);        // push the root value
    // until whole queue is empty i.e. sabai elements printed
    while (!q.empty())
    {
        int size = q.size(); // harek level ma kati ota element xa is stores in size
        for (int i = 0; i < size; i++)
        {                               // jati ota element xa euta level ma teti ota ko lagi loop
            TreeNode *node = q.front(); // front ko node i.e current node
            cout << node->val << " ";   // print the value of node
            q.pop();                    // remove it out of stack
            if (node->left != NULL)
            {
                q.push(node->left);
            } // push left child if exists
            if (node->right != NULL)
            {
                q.push(node->right);
            } // push right child if exists
            
        }
        cout << endl; // new line for new level
        
    }
}

int main()
{
    vector<int> array = {8, 5, 1, 7, 10, 12,15};
    TreeNode *root = bstFromPreorder(array);
    cout << "\nThe inorder traversal is: " << endl;
    inorder(root);
    cout << "\n\n The level order traversal top to down & left to right  is: " << endl;
    LevelOrderTraversal(root);
    return 0;
}