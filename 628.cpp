#include<bits/stdc++.h>
using namespace std;
int maximumproduct(vector<int> n)
{
    int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN,min1=INT_MAX,min2=INT_MAX;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]>max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = n[i];
        }
        else if(n[i]>max2)
        {
            max3 = max2;
            max2 = n[i];
        }
        else if(n[i]>max3) max3 = n[i];
    }
    for(int i=0;i<n.size();i++)
    {
        if(n[i]<min1)
        {
            min2 = min1;
            min1 = n[i];
        }
        else if(n[i]<min2)
        {
            min2 = n[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3<<endl;
    cout<<min1<<" "<<min2<<endl;
    return max(max3*max2*max1 , min1*min2*max1);
}
int main()
{
    vector<int> n = {-1,-2,-3,-4};
    int ans = maximumproduct(n);
    cout<<ans;
}