#include <bits/stdc++.h>
using namespace std;


int main ()
{
    string s = "eeydgwdykpv";
    unordered_map<char,int> map;

    int i = 0, j =0;
    int _max = 0;

    while ( j < s.length() )
    {
        map[s[j]]++;

        if ( map.size() > j-i+1 )
        {
            j++;
        }
        else if ( map.size() == j-i+1 )
        {
            _max = max(_max,j-i+1);
            cout<<"i: "<<i<<" j: "<<j<<" max: "<<_max<<endl;
            j++;
        }
        else 
        {
            while ( map.size() < j-i+1 )
            {
                map[s[i]]--;
                if ( map[s[i]] == 0 ) map.erase(s[i]);
                i++;
            }
            // j++;
        }
    }
    
    cout<<_max<<endl;

    return 0;
}