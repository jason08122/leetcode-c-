#include <bits/stdc++.h>
using namespace std;

void recursion_find_candidates(int _target, vector<int> _candidates,int current_sum,vector<int> current_candidates,vector<vector<int>> final_candidates)
{
    if ( current_sum > _target ) return;
    else if ( current_sum == _target )
    {
        final_candidates.push_back(current_candidates);
        return;
    }
    else
    {
        for ( int i=0;i<_candidates.size();i++)
        {
            current_candidates.push_back(_candidates[i]);
            recursion_find_candidates(_target,_candidates,current_sum+_candidates[i],current_candidates,final_candidates);
        }
    }
}


int main ()
{
    vector<int> candidates = {2,3,6,7};
    vector<vector<int>> ans;
    vector<int> current;
    int target = 7;

    recursion_find_candidates(7,candidates,0,current,ans);

    //return ans;

    for( int i=0;i<ans.size();i++)
    {
        for ( int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
