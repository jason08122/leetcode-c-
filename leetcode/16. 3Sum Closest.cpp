#include <bits/stdc++.h>
using namespace std;

int main ()
{

    vector<int>& nums = {-1,2,1,-4};

    int target = 1;
    int closest = 100000;

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
                if ( temp  > target )
                {
                    if ( abs(target-temp) < abs(target-closest)) closest = temp;
                    right--;
                }
                else if ( temp < target )
                {
                    if ( abs(target-temp) < abs(target-closest)) closest = temp;
                    left++;
                }
                else
                {
                    closest = target;
                    //break;
                    return closest;
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
                    if ( temp  > target )
                    {
                        if ( abs(target-temp) < abs(target-closest)) closest = temp;
                        right--;
                    }
                    else if ( temp < target )
                    {
                        if ( abs(target-temp) < abs(target-closest)) closest = temp;
                        left++;
                    }
                    else
                    {
                        closest = target;
                        //break;
                        return closest;
                    }
                }
            }
        }

    }
    return closest;
    //return 0;
}
