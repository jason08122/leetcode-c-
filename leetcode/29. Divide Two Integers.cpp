#include <bits/stdc++.h>
using namespace std;

int main ()
{

    vector<int>& nums = {-1,2,1,-4};

    int target = 1;
    int closest;

    int left,right;

    sort(nums.begin(),nums.end());

    for ( int i=0;i<nums.size()-2;i++)
    {
        int pivot = nums[i];
        if ( i == 0)
        {
            left = i+1;
            right = nums.size()-1;

            while ( left < right )
            {
                int temp = pivot + nums[left] + nums[right];
                if ( temp > 0 ) right--;
                else if ( temp < 0 ) left++;
                else
                {
                    vector<int> aaa;
                    aaa.push_back(pivot);
                    aaa.push_back(nums[left]);
                    aaa.push_back(nums[right]);
                    ans.push_back(aaa);

                    while ( nums[right-1] == nums[right] && left < right)
                    {
                        right--;
                    }
                    right--;
                }
            }
        }
        else
        {
            if ( nums[i] != nums[i-1] )
            {
                left = i+1;
                right = nums.size()-1;

                while ( left < right )
                {
                    int temp = pivot + nums[left] + nums[right];
                    if ( temp > 0 ) right--;
                    else if ( temp < 0 ) left++;
                    else
                    {
                        vector<int> aaa;
                        aaa.push_back(pivot);
                        aaa.push_back(nums[left]);
                        aaa.push_back(nums[right]);
                        ans.push_back(aaa);

                        while ( nums[right-1] == nums[right] && left < right )
                        {
                            right--;
                        }
                        right--;
                    }
                }
            }
        }

    }
    return ans;
    return 0;
}
