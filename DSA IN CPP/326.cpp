#include<bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n)
{
        if(n==1) return true;
        //if(n<1) return false;

        while(n!=3)
        {
            if(n%3==0) n/=3;
            else return false;
        }
        return true;
}
int main()
{
    int n;
    cin>>n;
    cout<<isPowerOfThree(n);

}