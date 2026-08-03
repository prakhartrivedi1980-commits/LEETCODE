#include<iostream>
#include<vector>
using namespace std;
vector<int> prices(vector<int> &nums)
{
    vector<int> ans ;
    for(int i=0;i<nums.size()-1;i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]>=nums[j])
            {
                nums[i] = (nums[i]-nums[j]);
                break;
            }
        }
        
    }    
    return nums;
}
int main()
{
    vector<int> nums = {10,1,1,6};
    vector<int> ans  = prices(nums);
    for(int i :ans) cout<<i<<" ";
}