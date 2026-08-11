#include <iostream>
using namespace std;
double myPow(double x, int n)
{
    if(n==0) return 1;
        if(x==1) return 1;
        double ans=1;
        long long int N=n;
        if(N<0)
        {
            x=1/x;
            N=-N;
        }
        while(N>=1)
        {
            if(N%2==1)
            {
                ans*=x;
            }
            x=x*x;
            N=N/2;
        }
        return ans;
}
int main()
{
    cout<<myPow(2.1, 3);
   // int a = -19;
   // int b = -a;
   // cout<<b;
}   