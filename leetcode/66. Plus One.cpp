#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> digits = {4,3,2,1};
    vector<int> ans;

    int temp = 0;

    for ( int i=0;i<digits.size();i++)
    {
        temp *= 10;
        temp += digits[i];
    }

    temp++;

    while ( temp/10 != 0)
    {
        int a = temp%10;
        ans.insert(ans.begin(),a);
        temp /= 10;
    }

    ans.insert(ans.begin(),temp);

    for ( int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
