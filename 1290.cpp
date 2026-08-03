#include<iostream>
#include<stack>
#include<math.h>
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
    int decimalvalue()
    {
        if(start->next ==NULL) return start->val;
        
        stack<int> s1;
        node *ptr = start;
        int sum = 0;

        while(ptr!=NULL)
        {
            s1.push(ptr->val);
            ptr=ptr->next;
        }
        int i = 0;
        while(!s1.empty())
        {
            if(s1.top() == 1)
            {
                sum = sum + pow(2,i++);
            }
            if(s1.top()==0) i++;
            
            s1.pop();
        } 
        return sum;
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
    l1.addlast(1);
    l1.addlast(0);
    l1.addlast(1);
    //l1.addlast();
    //l1.addlast();
    
    cout<<l1.decimalvalue();
}