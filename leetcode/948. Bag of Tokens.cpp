#include <bits/stdc++.h>
using namespace std;


int main ()
{
    vector<int> tokens {26};
    //vector<bool> played(tokens.size(),false);
    int power = 51;
    int score = 0;

    int l = 0,r = tokens.size()-1;

    sort(tokens.begin(),tokens.end());

    if ( tokens.size() == 0) return 0;
    if ( tokens.size() == 1 && power > tokens[0]) return 1;

    while ( l < r )
    {
        if ( power < tokens[l] ) break;//return score;

        while ( power >= tokens[l] )
        {
            score++;
            power -= tokens[l];
            l++;
        }

        if ( score > 0 && l+1 < r)
        {
            score--;
            power += tokens[r];
            r--;
        }
    }

    //return score;

    cout<<score;
    return 0;
}
