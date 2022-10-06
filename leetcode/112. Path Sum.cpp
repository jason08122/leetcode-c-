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

bool ans = false;

void check_path_sum ( TreeNode* t, int current_sum)
{
    if ( t == NULL ) return;

    if ( t->left == NULL && t->right == NULL )
    {
        if (current_sum == t->val ) ans = true;
    }
    else
    {
        check_path_sum(t->left,current_sum-t->val);
        check_path_sum(t->right,current_sum-t->val);
    }
}

int main ()
{
    TreeNode* root;
    int targetSum = 22;

    check_path_sum(root,targetSum);

    return ans;

    return 0;
}