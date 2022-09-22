#include <bits/stdc++.h>
using namespace std;

int recurrsion_score( int index,vector<int> _nums, vector<int> _mul,int head, int rear)
{
    if ( index == _mul.size() ) return 0;
    else
    {
        return max(_mul[index]*_nums[head]+recurrsion_score(index+1,_nums,_mul,head+1,rear),_mul[index]*_nums[rear]+recurrsion_score(index+1,_nums,_mul,head,rear-1));
    }
}

int main ()
{

    vector<int> nums = {1,2,3};
    vector<int> multipliers = {3,2,1};

    return recurrsion_score(0,nums,multipliers,0,nums.size()-1);

    return 0;
}
