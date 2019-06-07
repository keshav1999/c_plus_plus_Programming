#include<iostream>
#include<queue>
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
Treenode* createTreeLevelWise(){
    int x;
    cin >> x;
    if (x == -1) return NULL;

    Treenode* root = new Treenode(x);
    queue<Treenode*> q;
    q.push(root);

    while(q.empty() == false){
        Treenode* cur = q.front();
        q.pop();

        cin >> x;
        if (x != -1) {
            cur->left = new Treenode(x);
            q.push(cur->left);
        }

        cin >> x;
        if (x != -1) {
            cur->right = new Treenode(x);
            q.push(cur->right);
        }
    }
    return root;
}
void printinorder(Treenode* root)
{
	if (root == NULL)
	{
		return;
	}
	printinorder(root->left);
	if (root->left == NULL || root->right == NULL)
	{
		cout << root->data << " ";
	}

	printinorder(root->right);
}


int  main()
{
	Treenode* root = createTreeLevelWise();
	//printinorder(root);
	//cout << endl;
	//printpostorder(root);
	printinorder(root);
}