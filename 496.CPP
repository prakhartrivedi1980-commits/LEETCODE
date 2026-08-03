#include<bits/stdc++.h>
using namespace std;
int pos(int el , vector<int> &nums2)
{
    for(int i =0;i<nums2.size()-1;i++)
    {
        if(el==nums2[i]&&nums2[i]<nums2[i+1]) return nums2[i+1];
         
    }
    return -1;

}
vector<int> great_el(vector<int> &nums1,vector<int>& nums2)
{
    vector<int> ans;
    int i=0;
    while(i<nums1.size())
    {
        int el = nums1[i];
        

    }
}
vector<int> great_el2(vector<int> &nums1,vector<int>& nums2)
{
    for(int i=0,j=0;i<nums1.size(),j<nums2.size()-1;i++,j++)
    {
        
    }
}
int main()
{
    vector<int> nums1 = {2,4};
    vector<int> nums2 = {1,2,3,4};
    vector<int> ans = great_el(nums1,nums2);
    cout<<endl;
    for(int i:ans) cout<<i<<" ";
}