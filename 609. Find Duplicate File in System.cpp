#include <bits/stdc++.h>
using namespace std;


int main ()
{
    vector<string> paths = {"root/a 1.txt(abcd) 2.txt(efgh)","root/c 3.txt(abcd)","root/c/d 4.txt(efgh)","root 4.txt(efgh)"};
    vector<vector<string>> ans;
    unordered_map<string,vector<string>> m;

    for ( int i =0;i<paths.size();i++ )
    {
        string p;
        for ( int j =0;j<paths[i].length();j++)
        {
            if ( paths[i][j] == ' ' )
            {
                p = paths[i].substr(0,j) + '/';
                break;
            }
        }

        int left , right = paths[i].length()-1;
        string tmp_name,tmp_data;
        while ( right > 0 )
        {
            if ( paths[i][right] == ')' )
            {
                left = right -1;
                while ( paths[i][left] != '(') left--;
                tmp_data = paths[i].substr(left+1,right-left-1);
                right = left;
                left--;
                while ( paths[i][left] != ' ') left--;
                tmp_name = paths[i].substr(left+1,right-left-1);

                m[tmp_data].push_back(p+tmp_name);
                //right--;
            }
            else
            {
                right--;
            }
        }

        //m[paths[i].substr(target+1,paths[i].length()-1)].push_back()
    }

    for ( auto it:m )
    {
        if ( it.second.size() > 1 ) ans.push_back(it.second);        
    } 

    return ans;
    
    return 0;
}
