#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x = 2;
    int n = -2;
    double ans = 1;

    if ( n == 0 ) return 1;
    if ( x == 1 ) return 1;
    if ( n < 0 )
    {
        x = 1/x;
        n *= -1;
    }

    while ( n > 0 )
    {
        ans *= x;
        n--;
    }

    cout<<ans<<endl;

    //return ans;
    return 0;
}
