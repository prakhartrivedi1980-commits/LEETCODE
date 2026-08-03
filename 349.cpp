#include<bits/stdc++.h>
using namespace std;
vector<int> intersection_bruteforce(vector<int> &a , vector<int>&b)
{
    unordered_set<int> s;
    vector<int> c;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j]) s.insert(a[i]);
        }
    }
    for(int x:s) c.push_back(x);

    return c;
}
vector<int> intersection(vector<int> a,vector<int>b)
{
    unordered_set<int> s1(a.begin(),a.end());
    unordered_set<int> s2(b.begin(),b.end());
    vector<int> c;

    for(auto val:s1)
    {
        if(s2.count(val)) c.push_back(val);
    }
    return c;
}
int main()
{
    vector<int> a = {4,9,5};
    vector<int> b = {9,4,9,8,4};

    //vector<int> ans = intersection_bruteforce(a,b);
    vector<int> ans1 = intersection(a,b);
    for(int i:ans1) cout<<i<<" ";
}