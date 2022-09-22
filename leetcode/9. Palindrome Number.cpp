#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x = -121;
    int half;
    bool palindrom = true;

    if ( x < 0) palindrom = false;

    vector<int> nums;
    int temp = x%10;

    while ( (x/10) != 0)
    {
        //cout<<temp<<endl;
        nums.push_back(temp);
        x /= 10;
        temp = x%10;
    }
    nums.push_back(temp);

    if ( nums.size()%2 == 0)
    {
        half = nums.size()/2;
    }
    else
    {
        half = (nums.size()-1)/2;
    }

    for ( int i=0;i<half;i++)
    {
        if ( nums[i] != nums[nums.size()-i-1])
        {
            palindrom = false;
            break;
        }
    }

    if ( palindrom ) cout<<"is palindrom"<<endl;
    else cout<<"is not palindrom"<<endl;

    return 0;
}
