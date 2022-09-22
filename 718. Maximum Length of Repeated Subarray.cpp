#include <bits/stdc++.h>
using namespace std;


int main ()
{
    vector<int> num1 = {0,0,0,0,0};
    vector<int> num2 = {0,0,0,0,0};

    vector<int> table(num2.size()+1);
    int ans = 0;
    for ( int i =0;i<num1.size();i++ )
    {
        for (int j=num2.size()-1;j>=0;j--)
        {
            if ( num1[i] == num2[j] )
            {
                table[j+1] = table[j] + 1;
            }
            else
            {
                table[j+1] = 0;
            }

            ans = max(ans,table[j+1]);
        }
    }

cout<<"ans is "<< ans<<endl;

    // return ans;


    return 0;
}