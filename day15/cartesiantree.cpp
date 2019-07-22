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
int  largestelement(int A[], int be, int en)
{
	int pos = be;
	while (be <= en)
	{
		if (A[be] > A[en])
		{
			pos = be;
			be++;
		}
	}
	return pos;
}
Treenode* createtree(int A[], int be, int en)
{-=
	if (be > en)
	{
		return NULL;
	}
	int pos = largestelement(A, be, en);
	Treenode* root = new Treenode(A[pos]);
	                              //cout << "Enter left child of next level" << x << " ";
	                              root->left = createtree(A, be, pos - 1);
	                                      //cout << "Enter right child of next level" << x << " ";
	                                      root->right = createtree(A, pos + 1, en);
	                                      return root;
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
	int A[100];
	int N;
	cin>>N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	Treenode* my = createtree(A, 0, N-1);
	//printinorder(root);
	//cout << endl;
	//printpostorder(root);
	printlevelorder(my);
}