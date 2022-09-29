#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s = "babad";
    int n = s.length();
        int _max = 1;
        int start;
        int pal[n][n];
        bool ppp[n][n];

        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if ( i ==j )
                {
                    ppp[i][j] = true;
                    pal[i][j] = 1;
                    start = i;
                }
                else
                {
                    ppp[i][j] = false;
                    pal[i][j] = 0;
                }
            }
        }

        for ( int i=0;i<n-1;i++)
        {
            if ( s[i] == s[i+1] )
            {
                pal[i][i+1] = 2;
                ppp[i][i+1] = true;
                _max = 2;
                start = i;
            }
            else
            {
                pal[i][i+1] = 1;
            }
        }

        for ( int i=2;i<n;i++)
        {
            for (int j=0;j<n-i;j++)
            {
                if ( s[j] == s[j+i] && ppp[j+1][j+i-1] == true)
                {
                    ppp[j][j+i] = true;
                    pal[j][j+i] = pal[j+1][j+i-1]+2;
                    if ( pal[j][j+i] > _max)
                    {
                        _max = pal[j][j+i];
                        start = j;
                    }
                }
                else
                {
                    pal[j][j+i] = max(pal[j][j+i-1] , pal[j+1][j+i]);
                }
            }
        }

        // for (int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<pal[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<start<<" "<<_max<<endl;

        return s.substr(start,_max);


    return 0;
}