#include<bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int> &a ,vector<int> &b)
{
    unordered_set<int> s1(a.begin(),a.end());
    unordered_set<int> s2(b.begin(),b.end());   
    vector<int> c;
    for(int val:s1)
    {
        if(s2.count(val))
        {
            int count1 =0;
            int count2 =0;
            
            for(int i=0;i<a.size();i++)
            {
                if(a[i]==val) count1+=1;
            }
            for(int i=0;i<b.size();i++)
            {
                if(b[i]==val) count2+=1;
            }

            if(count1>count2)
            {
                for(int i=0;i<count2;i++)
                {
                    c.push_back(val); 
                }
            }
            else 
            {
                for(int i=0;i<count1;i++)
                {
                    c.push_back(val);
                }
            }
        }
    } 
    return c;
}
int main()
{
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};

    vector<int> c = intersect(nums1,nums2);
    for(int x:c) cout<<x<<" ";
}