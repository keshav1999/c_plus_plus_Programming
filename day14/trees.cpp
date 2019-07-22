#include<iostream>
#include<queue>
#include<cmath>
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
Treenode* createtree()
{
	int x;
	cin >> x;
	if (x == -1)
	{
		return NULL;
	}
	Treenode* root = new Treenode(x);
	cout << "Enter left child of next level " << x << " ";
	root->left = createtree();
	cout << "Enter right child of next level " << x << " ";
	root->right = createtree();
	return root;
}
void printinorder(Treenode* root)
{
	if (root == NULL)
	{
		return;
	}
	printinorder(root->left);
	cout << root->data << " ";

	printinorder(root->right);
}
void printpostorder(Treenode* root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";

	printinorder(root->left);

	printinorder(root->right);
}
void printlevelorder(Treenode* root)
{
	
		queue<Treenode*> q;
		q.push(root);
		while (q.empty() == false)
		{
			Treenode* cur = q.front();
			q.pop();
			cout << cur->data << " ";
			if (cur->left) q.push(cur->left);
			if (cur->right) q.push(cur->right);
		}
}
int  main()
{
	Treenode* root = createtree();
	//printinorder(root);
	//cout << endl;
	printpostorder(root);
	//printlevelorder(root);
}