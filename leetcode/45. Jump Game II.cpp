#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2,3,1,1,4};

    if ( nums.size()== 1 ) return 0;
    if ( nums[0] == 0 ) return 0;

    int left =1,right = nums[0],_count = 1;

    while ( right < nums.size()-1 )
    {
        int _max = 0;
        for ( int i = 1;i<=right;i++)
        {
            _max = max(nums[i]+i,_max);
        }

        _count++;
        left = right+1;
        right = _max;

    }
    return _count;
    //cout<<_count<<endl;
    return 0;
}
