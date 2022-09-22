#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {0};
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());

    int len = nums.size();
    int temp;
    int temp_old = 200001;
    bool skip = false;

    if ( len >= 3)
    {
        for ( int i=0;i<len-2;i++)
        {
            for ( int j=i+1;j<len-1;j++)
            {
                if ( skip )
                {
                    skip = false;
                    break;
                }
                temp = nums[i]+nums[j];
                vector<int>aaa;
                for ( int k=j+1;k<len;k++)
                {
                    if ( temp == temp_old)
                    {
                        break;
                    }

                    if ( temp == -1*nums[k])
                    {
                        aaa.push_back(nums[i]);
                        aaa.push_back(nums[j]);
                        aaa.push_back(nums[k]);
                        ans.push_back(aaa);
                        break;
                    }
                }
                temp_old = temp;
            }
            if ( i > 0 )
            {
                if ( nums[i] = nums[i-1])
                {
                    skip = true;
                }
            }
        }
    }

    for ( int i=0;i<ans.size();i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
