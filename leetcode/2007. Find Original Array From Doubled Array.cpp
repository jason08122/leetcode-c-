#include <bits/stdc++.h>
using namespace std;


int main ()
{
    vector<int> changed = {1,3,4,2,6,8};

    if ( changed.size()%2 == 1 ) cout<<"aaa";//return {};
    vector<int> ans;
    unordered_map<int,int> _map;

    for ( auto it: changed )
    {
        _map[it]++;
    }

    sort(changed.begin(),changed.end());

    changed.erase(unique(changed.begin(),changed.end()),changed.end());

    for (auto x:changed)
    {
        if (_map[x] > _map[x*2]) cout<<"bbb";//return {};

        for ( int i=0;i<_map[x];i++)
        {
            ans.push_back(x);

            _map[x*2]--;
        }
    }

    cout<<"ccc";//return ans;



    return 0;
}
