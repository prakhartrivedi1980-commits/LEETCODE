#include<iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node()
    {
        val = 0;
        next = NULL;
    }
    node(int val)
    {
        this->val = val;
        next = NULL;
    }
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
    int middlenode()
    {
        node *slow = start;
        node *fast = start;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow = slow->next;
            fast= fast->next->next;
        }
        return slow->val;
        
    }
    void traverse()
    {
        node *ptr = start;
        if(start==NULL) return;//NULL
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
    l1.addlast(10);
    l1.addlast(20);
    l1.addlast(30);
    l1.addlast(40);
    l1.addlast(50);

    l1.traverse();
    cout<<l1.middlenode();
}