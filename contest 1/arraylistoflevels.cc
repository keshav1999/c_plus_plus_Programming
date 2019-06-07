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
void printlevelorder(Treenode* root)
{
	queue<Treenode*>q;
	
	Treenode* marker = NULL;
	q.push(root);
	q.push(marker);
	cout<<"[";
	while (q.empty() == false)
	{
		Treenode* cur = q.front();
		q.pop();
		if (cur == marker)
		{
			cout<<"]";
			if (q.empty() == false)
			{
				q.push(marker);
			cout <<", [";

			}
			continue;
		}
		cout<< cur->data;

		if (cur->left)
		{
			q.push(cur->left);
		}

		if (cur->right)
		{
			q.push(cur->right);
		}
		if(q.front()!=marker)
		{
			cout<<", ";
		}

	}
}
int main()
{
	Treenode* root=createtree("true");
	cout<<"[";
	printlevelorder(root);
	cout<<"]";
}