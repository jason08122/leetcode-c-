#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {3,3};
    vector<int> ans(2);

    int target = 6;
    int temp;

    for ( int i = 0;i<nums.size()-1;i++)
    {
        temp = target - nums[i];

        vector<int>::iterator it = find(nums.begin()+i+1,nums.end(),temp);

        if ( it != nums.end() )
        {
            ans[0] = i;
            ans[1] = distance(nums.begin(),it);
            break;
        }

    }

    cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;

    return 0;
}
