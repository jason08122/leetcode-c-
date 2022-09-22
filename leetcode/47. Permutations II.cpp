#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> final_ans;

void permutation(vector<int>remain_nums,vector<int>current_nums)
{
    if ( remain_nums.size() == 0 )
    {
        for ( int i=0;i<current_nums.size();i++)
        {
            //cout<<current_nums[i]<<" ";
        }
        //cout<<endl;
        final_ans.push_back(current_nums);
        //cout<<final_ans.size()<<endl;
        return;
    }

    vector<int> check;

    for (int i=0;i<remain_nums.size();i++)
    {
        vector<int>::iterator it = std::find(check.begin(), check.end(), remain_nums[i]);

        if ( it == check.end() )
        {
            check.push_back(remain_nums[i]);

            vector<int>temp1 = remain_nums;
            vector<int>temp2 = current_nums;
            temp1.erase(temp1.begin()+i);
            temp2.push_back(remain_nums[i]);

            permutation(temp1,temp2);
        }

    }
}

int main()
{
    vector<int> nums = {1,1,2};
    vector<int> aaa;
    //vector<vector<int>> ans;

    permutation(nums,aaa);

    for ( int i =0;i<final_ans.size();i++)
    {
        for (int j=0;j<final_ans[i].size();j++)
        {
            cout<<final_ans[i][j]<<" ";
        }
        cout<<endl;
    }

    //return ans;

    return 0;
}
