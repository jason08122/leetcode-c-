#include <bits/stdc++.h>
using namespace std;

int main ()
{

    ListNode* head; // [1,2,3,4]

    if ( head == NULL) return NULL;

    ListNode* p,* q,* r;

    p = head;
    q = head -> next;

    if ( q == NULL ) return head;
    else r = q -> next;

    head = q;
    q->next = p;
    if ( r->next == NULL) p->next = r;
    else p->next = r->next;

    p = r;
    q = p -> next;
    r = q -> next;

    while ( q != NULL)
    {
        q->next = p;
        if ( r == NULL )
        {
            p -> next = NULL;
            break;
        }
        if ( r->next == NULL) p->next = r;
        else p->next = r->next;

        p = r;
        q = p -> next;
        r = q -> next;
    }


    return head;


    return 0;
}
