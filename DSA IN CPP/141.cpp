/* solved in leetcode only following code doesnt work for this env*/

#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node() : val(0), next(NULL) {};
    node(int item) : val(item), next(NULL) {};
};
class linkedlist
{
    public:
    node *start;
    linkedlist() : start(NULL){};
    void addlast(int item)
    {
        node *t = new node(item);
        if(start ==NULL) 
        {
            start =t;
            return;
        }
        node *ptr =start;
        while(ptr->next!=NULL) ptr=ptr->next;
        
        ptr->next = t;
        
    }
    vector <int> v()
    {
        vector<int> v1;
        node *ptr = start;
        while(ptr!=NULL)
        {
            v1.push_back(ptr->val);
            ptr=ptr->next;
        }
        return v1;
    }
};
int main()
{
    linkedlist l1;
    l1.addlast(10);
    l1.addlast(20);
    l1.addlast(30);
    l1.addlast(40);
   
    vector<int> v = l1.v();
    for(int i:v) cout<<i<<" ";
}