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
Treenode* createtree(int &sum)
{
	int x;
	cin >> x;
	if (x != -1)
	{
		sum = sum + x;
	}
	if (x == -1)
	{
		return NULL;
	}
	Treenode* root = new Treenode(x);
	cout << "Enter left child of next level" << x << " ";
	root->left = createtree(sum);
	cout << "Enter right child of next level" << x << " ";
	root->right = createtree(sum);
	return root;
}
int sumtree(Treenode* root, int sum)
{
	if (root == NULL)
	{
		return 0;
	}

	sumtree(root->left, sum + root->data);

	sumtree(root->right, sum + root->data);
	return sum;
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
	int s = 0;
	Treenode* root = createtree(s);
	//printinorder(root);
	//cout << endl;
	//printpostorder(root);
	//printlevelorder(root);
	//int s = sumtree(root, 0);
	cout << s;
}