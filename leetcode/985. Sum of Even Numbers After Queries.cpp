#include <bits/stdc++.h>
using namespace std;



int main ()
{
    vector<int> nums = {1,2,3,4};
    vector<vector<int>> queries = {{1,0},{-3,1},{-4,0},{2,3}};
    vector<int> answer;
    int sum = 0;

    for ( auto it:nums )
    {
        if ( it%2 == 0 ) sum += it;
    }

    for ( auto it:queries )
    {
        int val = it[0],index = it[1];
        if ( nums[index]%2 == 0 ) sum -= nums[index];

        nums[index] += val;

        if ( nums[index]%2 == 0 ) sum += nums[index];

        answer.push_back(sum);
    }


    // vector<int> temp = nums;

    // for ( int i=0;i<queries.size();i++ )
    // {
    //     temp[queries[i][1]] += queries[i][0];
    //     int total = 0;

    //     for (auto it:temp)
    //     {
    //         //cout<<it<<" ";
    //         if (it%2 == 0) total += it;
    //     }
    //     //cout<<endl;
    //     answer.push_back(total);
    // }

    for ( auto it:answer ) 
    {
        cout<<it<<" ";
    }



    return 0;
}