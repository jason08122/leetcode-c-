#include <bits/stdc++.h>
using namespace std;

bool vec_bigger_equal ( vector<int> v1, vector<int> v2 )
{
    int n = v1.size(),m = v2.size();
    if ( n > m ) return true;
    else if ( n < m ) return false;
    else
    {
        for ( int i = n-1; i>=0;i-- )
        {
            if ( v1[i] > v2[i] ) return true;
            else if ( v1[i] > v2[i] ) return false;
        }
    }

    return false;
}

vector<int> int_to_vec ( int num )
{
    vector<int> v;
    int temp = num;
    while ( temp != 0 )
    {
        v.push_back(temp%10);
        temp /= 10;
    }

    return v;
}

int main ()
{
    int x = 123;

    vector<int> max_num = {2,1,4,7,4,8,3,6,4,8};
    vector<int> min_num = {2,1,4,7,4,8,3,6,4,7};


    return 0;
}