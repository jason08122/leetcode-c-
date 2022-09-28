#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode* next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode* next) : val(x), next(next) {}
  };

int main ()
{
    ListNode* l1;
    ListNode* l2;
    ListNode* temp_1 = l1;
    ListNode* temp_2 = l2;

    vector<ListNode*> v;
    int addition = 0;


    while ( temp_1 != NULL || temp_2 != NULL)
    {
        int sum;
        if ( temp_1 != NULL && temp_2 != NULL )
        {
            sum = addition+temp_1->val+temp_2->val;
            addition = sum/10;
            sum %= 10;
            temp_1 = temp_1->next;
            temp_2 = temp_2->next;
        }
        else if (temp_1 != NULL)
        {
            sum = addition+temp_1->val;
            addition = sum/10;
            sum %= 10;
            temp_1 = temp_1->next;
        }
        else if (temp_2 != NULL)
        {
            sum = addition+temp_2->val;
            addition = sum/10;
            sum %= 10;
            temp_2 = temp_2->next;
        }

        ListNode* t = new ListNode(sum);
        v.push_back(t);
    }

    if ( addition != 0 )
    {
        ListNode* t = new ListNode(addition);
        v.push_back(t);
    }

    ListNode* temp = v[0];

    for ( int i = 0;i<v.size()-1;i++ )
    {
        v[i] -> next = v[i+1];
    }

    while ( temp != NULL )
    {
        cout<<temp->val<<" ";
        temp = temp ->next;
    }
    //return temp;
    return 0;
}
