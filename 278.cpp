#include<bits/stdc++.h>
using namespace std;
int isBadVersion(int n)
{
    return ;
}
int badversion(int n)
{
    int low = 0;
    int high = n;
    int ans;
    while(low<=high)
    {
    
        int mid = (low+(high-low)/2);
        bool value = isBadVersion(mid);

        if(value == true)
        {
             ans = mid;
             high = mid-1;
        }
       else 
        {
            low = mid+1;
        }

    }
    return ans;
    

}