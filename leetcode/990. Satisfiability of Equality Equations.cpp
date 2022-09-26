#include <bits/stdc++.h>
using namespace std;

vector<char> parent(26,0);

char find_root ( char c )
{
    int x = c-'a';
    return c == parent[x] ? c:find_root(parent[x]);
}

int main ()
{
    vector<string> equations = {"a==b","b!=a"};
    
    for ( int i = 0;i<parent.size();i++ )
    {
        int temp = i+'a';
        parent[i] = temp;
    }

    for ( auto it:equations )
    {
        if ( it[1] == '=' )
        {
            int p1 = find_root(it[0]) - 'a';
            int p2 = find_root(it[3]) - 'a';

            if ( p1 != p2 ) parent[p2] = parent[p1];
        }
    }

    for ( auto it:equations )
    {
        if ( it[1] == '!' )
        {
            int p1 = find_root(it[0]) - 'a';
            int p2 = find_root(it[3]) - 'a';

            if ( parent[p1] == parent[p2] ) return false;
        }
    }

    return true;

    // for ( auto it:parent ) cout<< it<<endl;

    return 0;
}