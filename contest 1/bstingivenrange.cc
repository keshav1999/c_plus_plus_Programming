#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode* next;
    TreeNode(int d) {
        data  = d;
        next = NULL;
        left = NULL;
        right = NULL;
    }
};

TreeNode* insertIntoBst(TreeNode* root, int x) {
    if (root == NULL) {

        return new TreeNode(x);
    }

    if (x < root->data) {
        root->left = insertIntoBst(root->left, x);
    }
    else {
        root->right = insertIntoBst(root->right, x);
    }
    return root;
}

TreeNode* createTree(int n) {
    int x;
    TreeNode* root = NULL;
    for(int i=0;i<n;i++){
        cin >> x;
        root = insertIntoBst(root, x);
    }
    return root;
}
void BstToGSBST(TreeNode *root, int *sum)
{
    if (root == NULL)  return;
    BstToGSBST(root->right, sum);
    *sum = *sum + root->data;
    root->data = *sum;
    BstToGSBST(root->left, sum);
}

void printpreOrder(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    printpreOrder(root->left);
    printpreOrder(root->right);
}
void  printInOrder(TreeNode* root,int l,int r)
{
    if(root==NULL)
    {
        return ;
    }
    printInOrder(root->left,l,r);
    if(root->data>=l&&root->data<=r)
    {
        cout<<root->data<<" ";
    }
    printInOrder(root->right,l,r);
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,l,r;
        cin>>n;
        TreeNode* root = createTree(n);
        cin>>l>>r;
        cout<<"# Preorder : ";
        printpreOrder(root);
        cout<<endl;
        cout<<"# Nodes within range are : ";
        printInOrder(root,l,r);
    }
}