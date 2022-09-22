#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> height = {4,2,0,3,2,5};
    int n = height.size();
    int ans = 0;

    vector<int> left(n),right(n);

    left[0] = height[0];
    for ( int i =1;i<n;i++ )
    {
        left[i] = max( left[i-1], height[i]);
    }

    right[n-1] = height[n-1];
    for ( int i =n-2;i>=0;i-- )
    {
        right[i] = max( right[i+1], height[i]);
    }

    for ( int i=1;i<n-1;i++ )
    {
        ans += min(left[i],right[i]) - height[i];
    }
    cout<<ans;
    return 0;
}
