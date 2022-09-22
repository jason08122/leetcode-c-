#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
                                    //
    //[[7,4,1],[8,5,2],[9,6,3]]

    int _size = matrix.size();

    for ( int i=0;i<_size-1;i++)
    {
        for( int j = i+1;j<_size;j++ )
        {
            int temp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }

    for ( int i =0;i<matrix.size();i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }


    for ( int i =0;i<matrix.size();i++)
    {
        for (int j=0;j<matrix[i].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
