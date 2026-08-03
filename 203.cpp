#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node() : val(0),next(NULL){};
    node(int item) : val(item),next(NULL){};
};
class Linkedlist
{
public:
    node *start;
    Linkedlist()
    {
        start = NULL;
    }
    void addfirst(int item)
    {
        node *t = new node(item);

        t->next = start;
        start = t;
    }
    void addlast(int item)
    {
        node *t = new node(item);
        if(start == NULL)
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
    void addafter(int num, int item)
    {
        node *t = new node(item);
        node *ptr = start;
        while (ptr->val != num && ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        if (ptr->next != NULL)
            t->next = ptr->next;

        ptr->next = t;
    }
    void addbefore(int num, int item)
    {
        node *t = new node(item);
        node *ptr = start;
        if(ptr->val==num)
        {
            t->next = start;
            start = t;
            return;
        }
        while(ptr->next->val!=num&&ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        
        t->next = ptr->next;
        ptr->next = t;
        
        /*node *preptr = NULL;
        while (ptr->val != num)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        if (ptr == start)
        {
            t->next = start;
            start = t;
        }
        else
        {
            t->next = ptr;
            preptr->next = t;
        }*/
    }
    void delnode(int num)
    {
        node *ptr = start;
        node *preptr = NULL;
        while (ptr->val != num && ptr != NULL)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            cout << "NOT FOUND";
            return;
        }
        if (ptr == start)
        {
            start = ptr->next;
        }
        else
        {
            preptr->next = ptr->next;
        }
        delete ptr;
    }
    void delelement(int item)
    {
        while(start!=NULL && start ->val==item)
        {
            node *temp =start;
            start= start->next;
            delete temp;
        }
        node *ptr = start->next;
        node *preptr = start;
        while(ptr!=NULL)
        {
            
            
            if(ptr!=NULL && ptr->val == item)
            {
                preptr->next = ptr->next;
                delete ptr;
                ptr = preptr->next;
            }
            else
            {
                preptr = ptr;
                ptr=ptr->next;
            }
        }
        
    }
    void traverse()
    {
        if(start == NULL) 
        {
            cerr<<"List is Empty : "<<endl;
            return;
        }
        node *ptr = start;
        while (ptr != NULL)
        {
            cout << ptr->val << " ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};
int main()
{
    Linkedlist l1;
    l1.addlast(1);
    l1.addlast(2);
    l1.addlast(2);
    l1.addlast(1);
    //l1.addlast(7);
    //l1.addlast(7);

    l1.traverse();

    l1.delelement(2);
    
    l1.traverse();
}