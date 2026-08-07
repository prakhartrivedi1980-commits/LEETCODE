#include<bits/stdc++.h>
using namespace std;
bool perfectNumber(int num)
{
    int i=1;
    int sum =0;
    while(i<=num/2)
    {
        if(num%i==0)
        {
            sum+=i;
        }
        i++;
    }
    if(sum==num) return true;
    return false;

}
int main()
{
    cout<<perfectNumber(7);
}
