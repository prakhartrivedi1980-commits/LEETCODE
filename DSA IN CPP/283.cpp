#include<bits/stdc++.h>
using namespace std;
void movezeroes(vector<int> &nums)
{
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        //int item = nums[i];

        for(int j=i+1;j<n&&nums[i]==0;j++)
        {
            if(nums[j]!=0) swap (nums[j],nums[i]);           
        }
    }
   
}
int main()
{
    vector<int> m = {0,0,0,0,0};
    movezeroes(m);
    for(int i:m) cout<<i<<" ";
}