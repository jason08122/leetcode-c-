#include <bits/stdc++.h>
using namespace std;

//.L.R...LR..L..
//LL.RRR.LRR.L..
//LL.RR.LLRRLL..

int main ()
{
    string dominoes = ".L.R...LR..L..";
    string temp = dominoes;
    string previous = temp;
    bool changed = false;

    for ( int i =0;i<temp.length();i++ )
    {
        if ( i == 0 )
        {
            if (previous[i] == '.' && previous[i+1] == 'L' ) 
            {
                temp[i] = 'L';changed = true;
            }

        }
        else if ( i == temp.length()-1 )
        {
            if (previous[i] == '.' && previous[i-1] == 'R' ) 
            {
                temp[i] = 'R';changed = true;
            }
        }
        else
        {
            if ( previous[i] == '.' )
            {
                if ( previous[i-1] == 'R' && previous[i+1] == 'L') {}
                else if ( previous[i-1] == 'R')
                {
                    temp[i] = 'R';
                    changed = true;
                }
                else if ( previous[i+1] == 'L')
                {
                    temp[i] = 'L';
                    changed = true;
                }
            }
        }
    }
    previous = temp;
    //cout<<temp<<endl;

    while ( changed )
    {
        changed = false;

        for ( int i =0;i<temp.length();i++ )
        {
            if ( i == 0 )
            {
                if (previous[i] == '.' && previous[i+1] == 'L' ) 
                {
                    temp[i] = 'L';changed = true;
                }

            }
            else if ( i == temp.length()-1 )
            {
                if (previous[i] == '.' && previous[i-1] == 'R' ) 
                {
                    temp[i] = 'R';changed = true;
                }
            }
            else
            {
                if ( previous[i] == '.' )
                {
                    if ( previous[i-1] == 'R' && previous[i+1] == 'L') {}
                    else if ( previous[i-1] == 'R')
                    {
                        temp[i] = 'R';
                        changed = true;
                    }
                    else if ( previous[i+1] == 'L')
                    {
                        temp[i] = 'L';
                        changed = true;
                    }
                }
            }
        }
        previous = temp;
        //cout<<temp<<endl;
    }

    

    return 0;
}