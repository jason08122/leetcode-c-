#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<vector<char>>& board =
    {{"5","3",".",".","7",".",".",".","."}
    ,{"6",".",".","1","9","5",".",".","."}
    ,{".","9","8",".",".",".",".","6","."}
    ,{"8",".",".",".","6",".",".",".","3"}
    ,{"4",".",".","8",".","3",".",".","1"}
    ,{"7",".",".",".","2",".",".",".","6"}
    ,{".","6",".",".",".",".","2","8","."}
    ,{".",".",".","4","1","9",".",".","5"}
    ,{".",".",".",".","8",".",".","7","9"}};


    bool ans = true;

    for ( int i=0;i<9;i++ )
    {
        vector<int> alpha(9);

        for ( int j=0;j<9;j++ )
        {
            int temp = board[i][j] - '0'-1;
            if ( temp >= 0)
            {
                if ( alpha[temp] == 1) ans = false;
                else alpha[temp] == 1;
            }
        }
    }

    for ( int j=0;j<9;j++ )
    {
        vector<int> alpha(9);

        for ( int i=0;i<9;i++ )
        {
            int temp = board[i][j] - '0'-1;
            if ( temp >= 0)
            {
                if ( alpha[temp] == 1) ans = false;
                else alpha[temp] == 1;
            }
        }
    }




    if ( ans == true) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    return 0;
}
