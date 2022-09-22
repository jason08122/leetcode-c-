#include <bits/stdc++.h>
using namespace std;

int main ()
{

    ListNode* head;
    int k;

    if ( k == 1 ) return head;

    vector<ListNode*> nums;

    ListNode* temp = head;

    while ( temp != NULL )
    {
        nums.push_back(temp);
        temp = temp->next;
    }

    int times = nums.size()/k;

    head = nums[k-1];

    for (int i=0;i<times;i++)
    {
        if ( i == times-1 )
        {
            //ListNode* rear = nums[i*k];
            nums[i*k] ->next = nums[(i+1)*k-1] ->next;
            for (int j=1;j<k;j++)
            {
                nums[i*k+j] ->next = nums[i*k+j-1];
            }
        }
        else
        {
            //ListNode* rear = nums[i*k];
            nums[i*k] ->next = nums[(i+2)*k-1];
            for (int j=1;j<k;j++)
            {
                nums[i*k+j] ->next = nums[i*k+j-1];
            }
        }

    }

    return head;


    return 0;
}
