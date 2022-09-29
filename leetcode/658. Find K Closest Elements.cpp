#include <bits/stdc++.h>
using namespace std;

int binary_search ( vector<int> v , int i ,int j , int target )
{
    if ( i == j-1 )
    {
        if ( target - v[i] > v[j] - target ) return j;
        else return i;
    }

    int temp = (i+j)/2;
    if ( v[temp] == target ) return temp;
    else if ( v[temp] > target )
    {
        return binary_search(v,i,temp,target);
    }
    else
    {
        return binary_search(v,temp,j,target);
    }
}

int main ()
{
    vector<int> arr = {1,2,3,4,5};
    //vector<int> temp = arr;
    vector<int> ans;
    int k = 4, x = 1;

    //if ( arr.size() == k ) return arr;

    for ( int i = 0 ;i<k;i++ )
    {
        // int index = binary_search(arr,0,arr.size()-1,x);

        int head = 0,rear =arr.size()-1;
        int index = (head+rear)/2;

        while ( arr[index] != x )
        {
            if ( head == rear-1 )
            {
                if ( x - arr[head] > arr[rear] - x )
                {
                    index = rear;
                    break;
                }
                else
                {
                    index = head;
                    break;
                }
            }

            if ( arr[index] == x )
            {
                break;
            }
            else if ( arr[index] > x )
            {
                rear = index;
            }
            else
            {
                head = index;
            }

            index = (head+rear)/2;
        }


        ans.push_back(arr[index]);
        arr.erase(arr.begin()+index);
    }

    sort(ans.begin(),ans.end());

    for ( auto it:ans )
    {
        cout<<it<<" ";
    }
    cout<<endl;

    //return ans;

    // cout<<binary_search(arr,0,n-1,x)<<endl;



    return 0;
}