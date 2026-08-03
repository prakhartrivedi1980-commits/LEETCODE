#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int val;
    node *next;
    node() : val(0),next(NULL) {};
    node(int item) : val(item),next(NULL) {};
};
class Linkedlist
{
    public:
    node *start;
    Linkedlist()
    {
        start= NULL;
    }
    void addlast(int item)
    {
        node *ptr =start;
        node *t = new node(item);
        if(start == NULL)
        {
            start = t;
            return;
        }
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next =t;
    }
    void addfirst(int item)
    {
        node *t = new node(item);
        
        t->next = start;
        start = t;
    }
    void removeduplicate()
    {
        node *ptr = start;
        if(ptr==NULL)
        {
            cout<<"List is empty ";
            return;
        }
        while(ptr->next!=NULL)
        {
             
            if(ptr->val == ptr->next->val)
            {
                node * dummy = ptr->next;
                ptr->next = dummy->next;
                delete dummy; 
            }
            else ptr= ptr->next;
        }

        return ;


    }
    void traverse()
    {
        node *ptr = start;
        while(ptr!=NULL)
        {
            cout<<ptr->val<<" ";
            ptr=ptr->next;            
        }
        cout<<endl;
        
    }

};
int main()
{
    Linkedlist l1;
    l1.addlast(10);
    l1.addlast(10);
    l1.addlast(20);
    l1.addlast(30);
    l1.addlast(30);

    l1.removeduplicate();
    l1.traverse();
    

}