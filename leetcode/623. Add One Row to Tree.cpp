#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void add_row_to_tree( TreeNode * n , int val , int depth, int current_depth )
{
    if ( n == NULL ) return;
    if ( current_depth == depth -1 )
    {
        TreeNode* temp = new TreeNode (val,n->left,NULL);
        n->left = temp;
        temp = new TreeNode (val,NULL,n->right);
        n->right = temp;
    }
    else
    {
        add_row_to_tree( n->left,val,depth,current_depth+1);
        add_row_to_tree( n->right,val,depth,current_depth+1);
    }
}

int main ()
{
    TreeNode* root;
    int val = 1, depth = 2;

    if ( root == NULL )
    {
        root == new TreeNode (val);
    }
    else if ( depth == 1 )
    {
        TreeNode* temp = new TreeNode (val,root,NULL);
        root = temp;
    }
    else
    {
        add_row_to_tree(root,val,depth,1);
    }

    return root;
    
    return 0;
}