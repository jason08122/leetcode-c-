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

int ans =0;

void find_max_path (TreeNode* n , int max_num )
{
    if ( n == NULL ) return;

    if ( n->val >= max_num ) 
    {
        ans++;
        max_num = n->val;
    }
    


}

int main ()
{
    TreeNode* root;

    find_max_path(root,-20000);
    return ans;

    return 0;
}