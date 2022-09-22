#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,3,5,6};
    int target = 0;
    int _size = nums.size();
    int lower = 0;
    int higher = _size-1;
    int mid;

    vector<int>::iterator it = find(nums.begin(),nums.end(),target);

    if ( it != nums.end())
    {
        cout<<distance(nums.begin(),it)<<endl;
    }
    else
    {
        if ( target > nums[_size-1] )
        {
            cout<<_size<<endl;
        }
        else if ( target < nums[0])
        {
            cout<<0<<endl;
        }
        else
        {
            while ( higher-lower > 1)
            {
                mid = (higher+lower)/2;
                if ( target > nums[mid])
                {
                    lower = mid;
                }
                else
                {
                    higher = mid;
                }
            }

            cout<<higher<<endl;
        }


    }






    return 0;
}
