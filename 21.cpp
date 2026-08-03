#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *next;
    node() : val(0), next(NULL) {};
    node(int item) : val(item), next(NULL) {};
};
class Linkedlist
{
public:
    node *start;
    Linkedlist()
    {
        start = NULL;
    }
    void addlast(int item)
    {
        node *ptr = start;
        node *t = new node(item);
        if (start == NULL)
        {
            t->next = NULL;
            start = t;
            return;
        }
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = t;
        t->next = NULL;
    }
    void traverse()
    {
        node *ptr = start;
        do
        {
            cout << ptr->val << " ";
            ptr = ptr->next;
        } while (ptr != NULL);
    }
    Linkedlist mergelist(Linkedlist l1, Linkedlist l2)
{
    node *ptr1 = l1.start;
    node *ptr2 = l2.start;
    
    if (ptr1 == NULL)
    return l2;
    if (ptr2 == NULL)
    return l1;
    if (ptr1 == NULL && ptr2 == NULL) return l1;
    
    node dummy;
    node *temp = &dummy;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->val <= ptr2->val)
        {
            temp ->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            temp ->next = ptr2;
            ptr2=ptr2->next;
        }
        temp = temp->next;
    }
    if(ptr1!=NULL) temp->next = ptr1;
    else temp->next = ptr2;

    Linkedlist ans;
    ans.start = dummy.next;

    return ans;
}
};

int main()
{
    Linkedlist l1;
    l1.addlast(10);
    l1.addlast(20);
    l1.addlast(30);
    l1.addlast(40);
    l1.traverse();

    cout << endl;

    Linkedlist l2;
    l2.addlast(1);
    l2.addlast(2);
    l2.addlast(3);
    l2.addlast(4);
    l2.traverse();
    cout<<endl;

    Linkedlist l3 = l3.mergelist(l1,l2);  
    l3.traverse();
}
