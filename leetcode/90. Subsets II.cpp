#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void sub_set(int s,vector<int> current,vector<int> candidates)
{
    if ( s == candidates.size() )
    {
        ans.push_back(current);
        return;
    }
    else
    {
        if ( s == 0 )
        {
            current.push_back(candidates[s]);
            sub_set(s+1,current,candidates);
            current.pop_back();
            sub_set(s+1,current,candidates);
        }
        else
        {
            if ( current.size() == 0 )
            {
                current.push_back(candidates[s]);
                sub_set(s+1,current,candidates);
                current.pop_back();
                sub_set(s+1,current,candidates);
            }
            else if ( candidates[s] ==  current[current.size()-1] )
            {
                current.push_back(candidates[s]);
                sub_set(s+1,current,candidates);
            }
            else
            {
                current.push_back(candidates[s]);
                sub_set(s+1,current,candidates);
                current.pop_back();
                sub_set(s+1,current,candidates);
            }
        }

    }

}

int main ()
{
    vector<int> nums = {1,2,2};

    sort(nums.begin(),nums.end());

    sub_set(0,{},nums);

    for ( int i=0;i<ans.size();i++ )
    {
        for( int j=0;j<ans[i].size();j++ )
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    //return ans;
    return 0;
}
