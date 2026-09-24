#include<bits/stdc++.h>
using namespace std;
bool isPowerofFour(int n)
{
    if(n==1) return true;
        if(n%4!=0||n<=0) return false;

        while(n%4==0)
        {
            n/=4;
        }
        return n==1;
}
int main()
{
    cout<<isPowerofFour(16);
}