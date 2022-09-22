#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> strs = {"dog","racecar","car"};
    string ans = "";
    //bool double_break = false;
    bool the_same = true;

    for ( int i = 0;i<strs[0].length();i++ )
    {
        char a = strs[0][i];

        for ( int j=1;j<strs.size();j++)
        {
            if ( strs[j][i] != a)
            {
                the_same = false;
                break;
            }
        }

        if (the_same) ans += a;
        else break;

    }

    cout<<ans<<endl;

    return 0;
}
