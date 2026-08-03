#include<bits/stdc++.h>
using namespace std;
int arrangeCoins(int n) {
        // binary search
        if(n==1||n==2) return 1;
        if(n==3) return 2;
        long long int low = 0 , high = n/2,mid,stairs;
       
        while(low<=high)
        {
            mid = low+((high-low)/2);
            stairs = (mid*(mid+1))/2;
            if(stairs == n ) return mid;
            else if(stairs>n) high = mid-1;
            else low = mid+1;
        }
        return high;
       
        

        
    }
int main()
{
    
}