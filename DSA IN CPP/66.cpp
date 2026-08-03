#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &nums)
{
    int i = nums.size()-1;
    if(nums.size()==1)
    {
        
       
        if(nums[i]+1==10)
        {
            nums.erase(nums.begin());
            nums.insert(nums.begin(),1);
            nums.push_back(0);
        }
        else 
        {
            nums[i]+=1;
        }
        return nums;
    }
    
    nums[i]+=1;
    while(i>=0)
    {
        if(nums[i]==10)
        {
            nums[i] = 0;
            if(i-1>=0)
            {
            
                i--;
                nums[i]+=1;
            }
        }
        else break;
    }
    if(nums[0]==0) nums.insert(nums.begin(),1);
    
  
    return nums; 

}

int main()
{
    vector<int> digit = {9,9}; // 0 1 2
    vector<int> ans = plusOne(digit);
    for(int i:ans) cout<<i<<" ";
    cout<<endl<<ans.size();
}