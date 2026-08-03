#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int> &nums,int val)
{
    int i;
    auto itr = nums.begin();
    while(itr!=nums.end())
    {
       
        if(*itr == val) nums.erase(itr);
        else  itr++;
    }
    sort(nums.begin(),nums.end());
    
    int k =0;
    auto it = nums.begin();
    while(it!=nums.end())
    {
        it++;
        k+=1;        
    }
    return k;
}
int main()
{
    vector<int> nums = {3,2,2,3};
    cout<<removeElement(nums,3)<<endl;
    for(int i:nums) cout<<i<<" ";

}

