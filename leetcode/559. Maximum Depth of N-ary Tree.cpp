#include <bits/stdc++.h>
using namespace std;

int _max = 0;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

void max_depth ( Node* n , int current_depth)
{
    if ( n == NULL ) return;
    current_depth++;

    _max = max(_max,current_depth);

    for ( auto it:n->children )
    {
        max_depth(it,current_depth);
    }
}

int main ()
{
    Node* root;    //root = [1,null,3,2,4,null,5,6]

    max_depth(root,0);

    cout<<_max<<endl;
    // return max_depth(root,0);

    return 0;
}