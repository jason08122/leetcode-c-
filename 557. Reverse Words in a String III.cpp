#include <bits/stdc++.h>
using namespace std;

string reverse_string (string s)
{
    string r_string;

    for ( int i = s.length()-1;i>=0;i-- )
    {
        r_string += s[i];
    }

    return r_string;
}

int main ()
{
    string s = "Let's take LeetCode contest";
    string ans;
    int head = 0;

    for ( int i =0;i<s.length();i++ )
    {
        if ( s[i] == ' ' )
        {
            ans += reverse_string(s.substr(head,i-head));
            ans += " ";
            head = i+1;
        }
        else if ( i == s.length()-1 )
        {
            ans += reverse_string(s.substr(head,i-head+1));
        }
    }

    cout<<ans<<endl;

    return 0;
}