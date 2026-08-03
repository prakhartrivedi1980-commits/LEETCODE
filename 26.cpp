#include<bits/stdc++.h>
using namespace std;
int removedup(vector<int> &nums)
{
    int i=1;
    int val = nums[0];
    while(i<nums.size())
    {
        if(val==nums[i]) nums.erase(nums.begin()+i);
        else 
        {
            val = nums[i];
            i++;

        }
    }
    return nums.size();
}
int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removedup(nums)<<" ";
    cout<<endl;
    for(int i:nums) cout<<i<<" ";
}