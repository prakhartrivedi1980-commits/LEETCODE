#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int low = 0,high=nums.size()-1,mid;
        while(low<=high)
        {
            mid = low+((high-low)/2);
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high = mid-1;
            else low = mid+1;

        }
        return low;
        
    }
int main()
{
    vector<int> nums = {1,3,5,6};
    cout<<searchInsert(nums,7);
}