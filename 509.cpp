#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0) return 0;
    int f = 1;
    int s = 1;
    for(int i=1;i<=n-2;i++)
    {
        int sum = f+s;
        f = s;
        s = sum;
    }
    return s;
}
int main()
{
    cout<<fibo(4);
}