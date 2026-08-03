#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    if(x<0) return false;

    int ld;
    long long rev = 0; // to store large numbers like 98745461204
    int temp = x;
    while(x>0)
    {
        ld = x %10;
        rev =rev*10 + ld;
        x/=10;

    }
    if(temp == rev) return true;
    else return false;
}
int main()
{
    int i;
    cin>>i;
    bool ans = isPalindrome(i);
    cout<<ans;
}