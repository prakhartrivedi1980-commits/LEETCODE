#include<bits/stdc++.h>
using namespace std;
int majority_element(vector<int> v)  //BOYER-MOORE VOTING ALGORITHM
{
    int cand,count=0;
    int n = v.size();
    //int i =0;
    for(int i=0;i<n;i++)
    {
        if(count == 0) cand = v[i];

        if(v[i]==cand) count++;

        else count --;

    }
    return cand;
}
int main()
{
    vector<int> nums = {1,1,2,2,2,1,1,1};
    //cout<<*max_element(nums.begin(),nums.end());
    int a = majority_element(nums);
    cout<<a;
}