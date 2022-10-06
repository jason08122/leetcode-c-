#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string colors = "aabaa";
    vector<int> neededTime = {1,2,3,4,1};
    int ans = 0;

    map<char,vector<int>> mp;

    for ( int i =0 ;i<neededTime.size();i++ )
    {
        mp[colors[i]].push_back(i);
    }

    for ( auto it:mp )
    {
        if (it.second.size() != 1 )
        {
            int start = 0;
            int _max = neededTime[it.second[start]];
            int  total = neededTime[it.second[start]];

            for ( int i =1;i<it.second.size();i++ )
            {
                if ( it.second[i] == it.second[i-1]+1 )
                {
                    _max = max(_max,neededTime[it.second[i]]);
                    total += neededTime[it.second[i]];
                }
                else if ( start != i-1 )
                {
                        ans += (total - _max);
                        _max = neededTime[it.second[i]];
                        total = neededTime[it.second[i]];
                        start = i;
                        cout<<ans<<endl;
                }
            }
        }

        
    }

    cout<<ans<<endl;
    // return ans;

    return 0;
}