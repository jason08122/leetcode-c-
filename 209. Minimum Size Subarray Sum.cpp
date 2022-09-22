#include <bits/stdc++.h>
using namespace std;


int main ()
{
    int target = 11;
    vector<int> nums = {1,1,1,1,1,1,1};
    int ans = INT_MAX;
    int total =0;
    //bool find = false;
    queue<int> tmp;

    for ( auto it:nums )
    {
        tmp.push(it);
        total += it;

        while ( total >= target )
        {
            int a = tmp.size();
            ans = min(ans, a);
            total -= tmp.front();
            tmp.pop();
            //find = true;
        }
    }

    return ans == INT_MAX ? 0:ans;

    // if ( !find ) return 0;
    // else return ans;

    return 0;
}