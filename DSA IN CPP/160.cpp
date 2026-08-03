/*Done in leetcode , can be donbe by using hashmap */
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node() : val(0),next(NULL){};
    node(int x) : val(x), next(NULL) {};
       
};
class linkedlist
{
    public:
    node *start;
    linkedlist() : start(NULL){};

    void addlast(int item)
    {
        node *t = new node(item);
        if(start = NULL)
        {
            start = t;
            return;
        }
        node *ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = t;
    }
};
