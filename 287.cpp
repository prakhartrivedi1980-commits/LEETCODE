#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> nums)
{
    set<int> temp;
    int dup;
    for(int i=0;i<nums.size();i++)
    {
        if(!temp.count(nums[i])) temp.insert(nums[i]);
        else
        {
            dup = nums[i];
            break;
    //        return nums[i];
        }
    }   
    return dup;

}
int main()
{
    vector<int> nums = {1,3,4,2,5,6,7,8,2};
    cout<<findDuplicate(nums);
}