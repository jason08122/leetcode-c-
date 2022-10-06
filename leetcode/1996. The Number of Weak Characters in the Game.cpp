#include <bits/stdc++.h>
using namespace std;

bool vec_sort ( vector<int> v1, vector<int> v2 )
{
    return v1[0] < v2[0];
}



int main ()
{
    vector<vector<int>> properties = {{1,1},{2,1},{2,2},{1,2}};
    int ans = 0;
    int _max =0;

    // sort(properties.begin(),properties.end(),vec_sort);
    sort(properties.begin(),properties.end(),[](vector<int> a, vector<int> b){
        if(a[0] == b[0]){
            return a[1] < b[1];
        }
        return a[0] > b[0];
    });


    // vvec_sort(properties);

    for ( int i =0;i<properties.size();i++ )
    {
        if ( _max > properties[i][1] ) ans++;
        _max = max(_max,properties[i][1]);
    }

    cout<<ans<<endl;

    // for ( int i =0;i<properties.size();i++ )
    // {
    //     for ( auto it:properties[i] )
    //     {
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}