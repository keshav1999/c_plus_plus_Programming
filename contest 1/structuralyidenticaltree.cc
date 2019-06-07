#include<iostream>
#include<queue>
#include<cmath>
#include<string>
#include<stack>
using namespace std;
class Treenode {
public:
	int data;
	Treenode* left;
	Treenode* right;
	Treenode(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};
Treenode* createtree(string X)
{
	int x;
	Treenode *root;
	if (X == "false")
	{
		return NULL;
	}
	cin >> x;
	root = new Treenode(x);
	cin >> X;
	root->left = createtree(X);
	cin >> X;
	root->right = createtree(X);
	return root;
}
bool identical(Treenode* root, Treenode* root1)
{
	if (root == NULL && root1 == NULL) return 1;
	if (root == NULL || root1 == NULL) return 0;
	return (root->data ==root1->data && identical(root->left, root1->left) && identical(root->right, root1->right));
}
int main()
{
	Treenode* root = createtree("true");
	Treenode* root1 = createtree("true");
	bool a = identical(root, root1);
	cout << a;
}