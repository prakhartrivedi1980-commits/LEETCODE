#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n==1) return 1;
    int f = 1;
    int s = 1;
    int sum;
    cout<<f<<" "<<s<<" ";
    for(int j = 1;j<n;j++)
    {
        sum = f+s;
        cout<<sum<<" ";
        f = s;
        s = sum;
    }
    return sum;
}
int main()
{
    int n; 
    cin>>n;
    int ans = fibo(n);
    cout<<endl<<ans;
}