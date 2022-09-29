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
            else if ( v1[i] < v2[i] ) return false;
        }
    }

    return false;
}

vector<int> int_to_reverse_vec ( int num )
{
    vector<int> v;
    int temp = num;
    while ( temp != 0 )
    {
        v.push_back(temp%10);
        temp /= 10;
    }

    std::reverse(v.begin(),v.end());

    return v;
}

vector<int> neg_int_to_reverse_vec ( int num )
{
    vector<int> v;
    int temp = num;
    while ( temp != 0 )
    {
        int remind = temp%10;
        v.push_back(remind*-1);
        temp /= 10;
    }

    std::reverse(v.begin(),v.end());

    return v;
}

int vec_to_int ( vector<int> v )
{
    int sum = 0;
    for ( int i = v.size()-1;i>=0;i-- )
    {
        sum *= 10;
        sum += v[i];
    }

    return sum;
}

int main ()
{
    int x = 123;
    bool positive;

    vector<int> max_num = {7,4,6,3,8,4,7,4,1,2};
    vector<int> min_num = {8,4,6,3,8,4,7,4,1,2};
    vector<int> v_num;

    if ( x > 0 ) 
    {
        positive = true;
        v_num = int_to_reverse_vec(x);
    }
    else if ( x < 0 ) 
    {
        positive =false;
        v_num = neg_int_to_reverse_vec(x);
    }
    else return 0;

    

    if ( positive )
    {
        if ( vec_bigger_equal(v_num,max_num)) return 0;
        else return vec_to_int(v_num);
    }
    else
    {
        if ( vec_bigger_equal(v_num,min_num)) return 0;
        else return vec_to_int(v_num)*-1;
    }


    return 0;
}