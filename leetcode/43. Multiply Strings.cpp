#include <bits/stdc++.h>
using namespace std;

vector<int> string_to_vector(string s)
{
    vector<int> total;

    for ( int i=s.length()-1;i>=0;i--)
    {
        int temp = s[i] - '0';
        total.push_back(temp);
    }

    return total;
}



int main()
{
    string num1 = "123";
    string num2 = "456";

    if ( num1 == "0" || num2 == "0") return "0";

    vector<int> v1 = string_to_vector(num1);
    vector<int> v2 = string_to_vector(num2);
    vector<long> ans(num1.length()+num2.length(),0);
    string anans = "";

    for ( int i=0;i<v2.size();i++)
    {
        for ( int j=0;j<v1.size();j++)
        {
            int temp = v2[i]*v1[j];
            //cout<<temp<<" ";
            ans[i+j] += temp%10;
            ans[i+j+1] += temp/10;
        }
    }

    for (int i=0;i<ans.size();i++)
    {
        //cout<<ans[i]<<" ";

        if ( ans[i] > 9)
        {
            ans[i+1] += ans[i]/10;
            ans[i] %= 10;
        }
    }

    /*for (int i = ans.size()-1;i>=0;i--)
    {
        cout<<ans[i];
    }*/


    for ( int i=ans.size()-1;i>=0;i--)
    {
        if (i == ans.size()-1)
        {
            if ( ans[ans.size()-1] != 0 )
            {
                char aaa = ans[i]+48;
                //cout<<aaa;
                anans += aaa;
            }
        }
        else
        {
            char aaa = ans[i]+48;
            //cout<<aaa;
            anans += aaa;
        }
    }

    cout<<anans<<endl;

    return 0;
}
