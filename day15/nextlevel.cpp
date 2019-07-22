#include <iostream>
#include <queue>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d) {
        data  = d;
        left = NULL;
        right = NULL;
    }
};

TreeNode* createTree() {
    int x;
    cin >> x;
    if (x == -1) {
        return NULL;
    }

    TreeNode* root = new TreeNode(x);
    // cout << "Enter left child of " << x << " ";
    root->left = createTree();
    // cout << "Enter right child of " << x << " ";
    root->right = createTree();
    return root;
}
void printLevelOrder2(TreeNode* root) {
    queue<TreeNode*> q;
    const TreeNode* MARKER = NULL;

    q.push(root);
    q.push(MARKER);

    while (q.empty() == false) {
        TreeNode* cur = q.front();
        q.pop();

        if (cur == MARKER){
            cout << endl;
            if (q.empty() == false){
                q.push(MARKER);
            }
            continue;
        }

        cout << cur->data << " ";

        if (cur->left) {
            q.push(cur->left);
        }

        if (cur->right) {
            q.push(cur->right);
        }
    }
    int main()
    {
        
    }