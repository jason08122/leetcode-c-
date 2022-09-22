#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans;

    if ( strs.size() == 0)
    {
        return ans;
    }

    map<string,vector<string>> mp;

    for ( int i=0;i<strs.size();i++)
    {
        string temp = strs[i];
        sort(strs[i].begin(),strs[i].end());

        mp[strs[i]].push_back(temp);
    }

    for (auto it:mp)
    {
        ans.push_back(it.second);
    }

    return ans;

    return 0;
}
