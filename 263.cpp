#include<bits/stdc++.h>
using namespace std;
bool isugly(int n) {
        if(n<=0) return false;
        while(n!=1)
        {
            if(n%2==0) n/=2;
            else if(n%3==0) n/=3;
            else if(n%5==0) n/=5;

            else return false;
        }
        return true;
        
        
}
int main()
{
    cout<<isugly(6);
    int n = 15;
    /*while(n!=1)
    {
    
        if(n%2==0) n/=2;
    
        if(n%3==0) n/=3;
    
        if(n%5==0) n/=5;
    
        else cout<<"HI";

    }*/
}