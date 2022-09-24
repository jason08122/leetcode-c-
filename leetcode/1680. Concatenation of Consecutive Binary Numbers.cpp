#include <bits/stdc++.h>
using namespace std;

vector<int> int_to_vec ( int num )   // reverse order
{
    if ( num == 0 ) return {0};

    vector<int> ans;
    int temp = num;
    while ( temp != 0 )
    {
        ans.push_back(temp%10);
        temp /= 10;
    }

    return ans;
}

vector<int> vector_add (vector<int> v1, vector<int> v2 )
{
    vector<int> ans;

    if ( v1.size() > v2.size() )
    {
        ans = v1;
        for (int i =0;i<v2.size();i++ )
        {
            ans[i] += v2[i];
        }
    }
    else
    {
        ans = v2;
        for (int i =0;i<v1.size();i++ )
        {
            ans[i] += v1[i];
        }
    }

    for ( int i =0;i<ans.size();i++ )
    {
        if ( i == ans.size()-1 )
        {
            if ( ans[i] > 9 )
            {
                ans.push_back(ans[i]/10);
                ans[i] %= 10;
            }
        }
        else
        {
            if ( ans[i] > 9 )
            {
                ans[i+1] += ans[i]/10;
                ans[i] %= 10;
            }
        }
    }

    return ans;
}

vector<int> vector_mul ( vector<int> v1, vector<int> v2  )
{
    vector<int> ans(v1.size()+v2.size(),0);

    for ( int i=0;i<v2.size();i++)
    {
        for ( int j=0;j<v1.size();j++)
        {
            int temp = v2[i]*v1[j];
            //cout<<temp<<" ";
            ans[i+j] += temp%10;
            ans[i+j+1] += temp/10;
        }
    }

    for (int i=0;i<ans.size();i++)
    {
        if ( ans[i] > 9)
        {
            ans[i+1] += ans[i]/10;
            ans[i] %= 10;
        }
    }

    if ( ans.back() == 0 ) ans.pop_back();

    return ans;
}

int main ()               //11011
{
    int n = 12,ans = 1;

    for ( int i =2 ;i <= n;i++ )
    {

        int temp = log2(i)+1;
        cout<<i<<" : "<<ans<<endl;
        ans %= 1000000009;
        cout<<i<<" : "<<ans<<endl;
        ans *= exp2(temp);
        ans += i;
        ans %= 1000000009;

        cout<<i<<" : "<<ans<<endl;  
    }

    //cout<<ans<<endl;
    // vector<int> ans ={1};

    //if ( n == 1 ) return 1;

    // for ( int i=2; i<=n ;i++ )
    // {
    //     int temp = log2(i)+1;
    //     temp = exp2(temp);
    //     vector<int> tmp_v = int_to_vec(temp);
    //     ans = vector_mul(ans,tmp_v);
    //     ans = vector_add(ans,int_to_vec(i));
    // }

    // for ( int i = ans.size()-1 ;i>=0;i-- )
    // {
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    //cout<<ans<<endl;

    //505379714

    // return concat_binary_num(n,1);

    return 0;
}