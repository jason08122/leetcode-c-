#include <bits/stdc++.h>
using namespace std;


int main ()
{
    vector<vector<int>> firstList = {{0,2},{5,10},{13,23},{24,25}};
    vector<vector<int>> secondList = {{1,5},{8,12},{15,24},{25,26}};
    vector<vector<int>> ans;

    int n = firstList.size(),m = secondList.size();
    int index1 = 0,index2 = 0,max_i,min_j;

    while ( index1 < n && index2 < m )
    {
        //cout<<"aaa"<<endl;
        max_i = max(firstList[index1][0],secondList[index2][0]);
        min_j = min(firstList[index1][1],secondList[index2][1]);

        if ( min_j - max_i >= 0 )
        {
            ans.push_back({max_i,min_j});
        }
        if ( firstList[index1][1] < secondList[index2][1] )
        {
            index1++;
        }
        else
        {
            index2++;
        }
        
    }

    for ( auto it:ans)
    {
        cout<<"["<<it[0]<<","<<it[1]<<"] "<<endl;
    }

    return 0;
}