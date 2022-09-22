#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s = "   -42";

    vector<int> nums;

    bool positive = true;
    bool sign_appear = false;

    for ( int i=0;i<s.length();i++ )
    {
        int temp = s[i] - '0';

        if ( s[i] != ' ')
        {
            if ( s[i] == '-')
            {
                if ( sign_appear ) return 0;
                else
                {
                    positive = false;
                    sign_appear = true;
                }
            }
            else if ( s[i] == '+')
            {
                if ( sign_appear ) return 0;
                else
                {
                    sign_appear = true;
                }
            }
            else if ( temp >= 0 && temp <= 9 )
            {
                nums.push_back(temp);
            }
            else
            {
                if ( nums.size() != 0 ) break;
                else return 0;
            }
        }
    }

    int ans = 0;

    for ( int i=0;i<nums.size();i++)
    {
        if ( positive )
        {
            if ( ans >214748364) return 2147483647;
        }
        else
        {
            if ( ans >214748364) return -2147483648;
        }

        ans *= 10;
        ans += nums[i];
    }

    if ( positive ) return ans;
    else return ans*-1;

    return 0;
}
