#include<iostream>
#include<stack>
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
    bool isPalindrome()
    {
        node *ptr = start;
        stack<int> s1;
        while(ptr!=NULL)
        {
            s1.push(ptr->val);
            ptr=ptr->next;
        }
        ptr = start;
        while(ptr!=NULL)
        {
            if(ptr->val == s1.top())
            {
                ptr=ptr->next;
                s1.pop();
            }
            else return 0;
        }
        return 1;
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
    }
};
int main()
{
    Linkedlist l1;
    l1.addlast(10);
    l1.addlast(20);
    l1.addlast(20);
    l1.addlast(10);
    //l1.addlast(50);

    l1.traverse();

    bool ans = l1.isPalindrome();
    cout<<endl<<ans;
}