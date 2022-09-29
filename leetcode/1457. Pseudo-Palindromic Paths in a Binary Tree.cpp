#include <bits/stdc++.h>
using namespace std;

int ans = 0;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void find_pesuodo_pal ( TreeNode* n , vector<int> n_count )
{
    if ( n == NULL ) return;
    if ( n->left == NULL && n->right == NULL )
    {
        n_count[n->val-1]++;
        int odd_c = 0;
        for ( auto it:n_count )
        {
            if ( it%2 != 0 && odd_c != 0)
            {
                return;
            }
            else if ( it%2 != 0 )
            {
                odd_c++;
            }
        }
        ans++;
        return;
    }
    else
    {
        n_count[n->val-1]++;
        find_pesuodo_pal(n->left,n_count);
        find_pesuodo_pal(n->right,n_count);
    }
}


int main ()
{
    TreeNode* root;
    vector<int> num_count(9);

    find_pesuodo_pal(root,num_count);

    cout<<ans<<endl;

    //return ans;


    return 0;
}