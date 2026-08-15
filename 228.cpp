#include<bits/stdc++.h>
using namespace std;
vector<string> summaryRanges(vector<int> nums)
{
    vector<string> ans;
    if(nums.size()==1)
    {
        ans.push_back(to_string(nums[0]));
        return ans;
    }
    string temp="";
    bool brk = false;
    for(int i=0;i<nums.size();i++)
    {
        if(i==nums.size()-1)
        {
            if(brk==false)
            {
                ans.push_back(to_string(nums[i]));
                return ans;
            }
            else
            {
                temp = temp + to_string(nums[i]);
                ans.push_back(temp);
                return ans;
            }
        }
        if(nums[i]==nums[i+1]-1)
        {
            if(brk==false)
            {
                temp = to_string(nums[i]) + "->";
                brk = true;
            }
            else continue;
        }
        else
        {
            temp = temp + to_string(nums[i]);
            brk = false;
            ans.push_back(temp);
            temp = "";
        }
        
    }
    return ans;
    
}
int main()
{
    vector<int> num = {0};
    vector<string> ans = summaryRanges(num);
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }    
}
