#include<iostream>
using namespace std;
int mySqrt(int x)
{
    if(x==1) return 1;
    int low =1;
    long long int high = x/2;
    long long int ans;
    while(low<=high)
    {
        int mid = (high+low)/2;
        
        if(mid*mid<=x)
        {
            ans = mid;
            low = mid +1;
        }
        if(mid*mid>x)
        {
            high = mid-1;
        }   
    }
    return ans;

}
int main()
{
    int x = 16;
    cout<<mySqrt(x);
}