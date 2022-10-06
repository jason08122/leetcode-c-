#include <bits/stdc++.h>
using namespace std;

int recur ( int num )
{
    if ( num == 1 ) return 1;

    if ( num%2 != 0 )
    {
        return recur(3*num+1)+1;
    }
    else
    {
        return recur(num/2)+1;
    }
}

int main ()
{
    int num1,num2;
    int _max = -1;
    cin>>num1>>num2;

    for ( int i = num1;i<=num2;i++ )
    {
        _max = max (_max, recur(i));
    }

    cout<<_max<<endl;
    return 0;
}