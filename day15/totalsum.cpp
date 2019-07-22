#include<iostream>
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
	//cout << "Enter left child of next level" << x << " ";
	root->left = createtree();
	//cout << "Enter right child of next level" << x << " ";
	root->right = createtree();
	return root;}
int sumtree(Treenode* root,int number)
{
	if(root==NULL)
	{
		return 0;
	}
	number=number*10+root->data;

	if(root->left==NULL&&root->right==NULL)
	{
		return number;
	}
	int leftsum=sumtree(root->left,number);
	int rightsum=sumtree(root->right,number);
	return leftsum+ rightsum;
}	

int main()
{
Treenode* my=createtree();
int sum=sumtree(my,0);
cout<<sum;
}