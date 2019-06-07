#include<iostream>
#include<queue>
#include<cmath>
#include<string>
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
void displaysiblings(Treenode* root)
{
	if (root == NULL)
	{
		return;
	}
	if (root->left != NULL && root->right != NULL)
	{
		displaysiblings(root->left);

		displaysiblings(root->right);
	}
	else if (root->right != NULL)
	{
		cout << root->right->data << " ";
		displaysiblings(root->right);
	}
	else if ( root->left != NULL)
	{
		cout << root->left->data << " ";
		displaysiblings(root->left);
	}


}
void printlevelorder(Treenode* root)
{
	queue<Treenode*>q;
	Treenode* marker = NULL;
	q.push(root);
	q.push(marker);
	while (q.empty() == false)
	{
		Treenode* cur = q.front();
		q.pop();
		if (cur == marker)
		{
			cout << endl;
			if (q.empty() == false)
			{
				q.push(marker);
			}
			continue;
		}
		cout << cur->data << " ";
		if (cur->left)
		{
			q.push(cur->left);
		}
		if (cur->right)
		{
			q.push(cur->right);
		}
	}
}
void  sum1(Treenode* root, int &sum)
{
	queue<int>q;
	if (root == NULL)
	{
		return;
	}
	q.push(root->data);

	sum1(root->left, sum);

	sum1(root->right, sum);

	while (q.empty() == false)
	{
		sum = sum + q.front();
		q.pop();
	}
}

int  main()
{
	Treenode* root = createtree("true");
	//printinorder(root);
	//cout << endl;
	//displaysiblings(root);
	//printlevelorder(root);
	//zigzagprint()
	int n=0;
	sum1(root,n );
	cout << n;
}