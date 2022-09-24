#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

void find_path_sum ( TreeNode* node, vector<int> v,int remain_sum )
{
    if ( node == NULL ) return;
    if ( node ->left== NULL && node -> right == NULL) 
    {
        if ( remain_sum - node->val == 0 ) 
        {
            v.push_back(node->val);
            ans.push_back(v);
        }
        return;
    }
    
    // vector<int> tmp = v;
    // tmp.push_back(node->val);
    v.push_back(node->val);

    find_path_sum(node->left,v,remain_sum-node->val);
    find_path_sum(node->right,v,remain_sum-node->val);  
}

int main ()
{
    TreeNode* root;
    int targetSum = 22;

    find_path_sum(root,{},targetSum);



    return 0;
}