#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ListNode* head = {1,4,3,2,5,2};
    ListNode* temp = head;
    int x =3;
    int _count = 0;

    vector<ListNode*> nums;

    while ( temp != NULL )
    {
        if ( temp-> value < x )
        {
            nums.insert(nums.begin()+_count,temp);
            _count++;
        }
        else
        {
            nums.push_back(temp);
        }
    }

    ListNode* ans = new ListNode (num[0] -> value);
    ListNode* ttemp = ans;

    for ( int i=1;i<nums.size();i++ )
    {
        ListNode* n = new ListNode(num[i] -> value);
        ttemp -> next = n;
        ttemp = ttemp -> next;
    }

    return ans;

    return 0;
}
