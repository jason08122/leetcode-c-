#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "luffy is still joyboy";
    int ans = 0;


    for ( int i = s.length()-1;i >= 0;i--)
    {
        if ( s[i] != ' ') ans++;
        else
        {
            if ( ans != 0 ) break;
        }
    }

    cout<<ans<<endl;

    return 0;
}
