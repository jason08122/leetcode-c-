#include <bits/stdc++.h>
using namespace std;


int main ()
{
    vector<int> nums = {1,1,1};
    //vector<int> sums(nums.size());
    unordered_map<int,int> sums;
    int k = 2;
    int total = 0,count = 0;

    sums[0] = 1;
    // sums[0] = nums[0];
    for ( auto it:nums )
    {
        total += it;

        int temp = total - k;
        if ( sums.find(temp) != sums.end() ) count += sums[temp];
        sums[total]++;
    }

    cout<<count<<endl;

    return 0;
}