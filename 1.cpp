#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i =0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
        
}
int main()
{
    vector<int> num = {3,3};
    vector<int> ans =twoSum(num,6);
    for(int i:ans) cout<<i<<" ";
}