#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum=0;
    int temp=0;
    for(int i =0;i<n;i++) sum+=nums[i];
    
    for(int i=0;i<=n;i++) temp+=i;
    
    return (temp-sum);
}
int main()
{
    vector<int> nums = {3,0,1,2};
    cout<<missingNumber(nums);

}