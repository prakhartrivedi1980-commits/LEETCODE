#include<bits/stdc++.h>
using namespace std;
bool isduplicate_usingset(vector<int> nums)
{
    unordered_set <int> s;
    for(int i:nums)
    {
        if(s.count(i)) return true;
        s.insert(i);
    }    
    return false;
}
bool isduplicate(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    for(int i =0;i<nums.size();i++)
    {
        if(nums[i]==nums[i+1]) return true;
    }
    return false;


}
int main()
{
    vector<int> v = {1,2,3,4};
    bool ans1 = isduplicate_usingset(v);
    bool ans2 = isduplicate(v);
    cout<<ans1<<endl;
    cout<<ans2;
}