
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
	for(int i=0;i<n;i++) {
		cin >> x;
		root = insertIntoBst(root, x);
	}
	return root;
}
void getmodify(int &root, TreeNode* orignode)
{
	if (orignode == NULL)
	{
		return;
	}
	if ((root) < (orignode->data))
	{
		root = (orignode->data) + (root);
	}
	getmodify(root, orignode->left);
	getmodify(root, orignode->right);
}
void modifybst(TreeNode* root, TreeNode* orignode)
{
	if (root = NULL)
	{
		return;
	}
	getmodify(root->data, orignode);
	modifybst(root->left, orignode);
	modifybst(root->right, orignode);
}

void printInOrder(TreeNode* root,int N) {
	if (N<=0) {
		return;
	}
	cout << root->data << " ";

	printInOrder(root->left,N-1);
	
	printInOrder(root->right,N-1);
}

int main() {
	int t, n;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> n;
		    TreeNode* root = createTree(n);
		printInOrder(root,n);
	}

}