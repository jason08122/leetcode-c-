#include <bits/stdc++.h>
using namespace std;


int main ()
{
    vector<int> data = {197,130,1};

    int index = 0;
        //bool ans = true;

        while ( index < data.size() )
        {
            if ( data[index] >= 240 )
            {
                if ( data[index] >= 248 ) return false;
                if ( index+3 > data.size()-1 ) return false;

                for ( int i =1;i<=3;i++ )
                {
                    if ( data[index+i] >= 192 || data[index+i] < 128) return false;
                }

                index += 4;
            }
            else if ( data[index] >= 224 )
            {
                if ( index+2 > data.size()-1 ) return false;

                for ( int i =1;i<=2;i++ )
                {
                    if ( data[index+i] >= 192 || data[index+i] < 128) return false;
                }

                index += 3;
            }
            else if ( data[index] >= 192 )
            {
                if ( index+1 > data.size()-1 ) return false;
                if ( data[index+1] >= 192 || data[index+1] < 128) return false;

                index += 2;
            }
            else if ( data[index] >= 128 )
            {
                return false;
            }
            else
            {
                index ++;
            }

        }

        return true;
    //return ans;

    return 0;
}
