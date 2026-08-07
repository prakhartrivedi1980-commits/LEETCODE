#include<bits/stdc++.h>
using namespace std;
int findLucky(vector<int> &arr)
{
    unordered_map<int,int> freq;
    int frequency =1;
    int ans=-1;
    for(int x:arr)
    {
        freq[x]++;              
    }
    /*for(auto p:freq)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }*/
    for(auto p:freq)
    {
        if(p.first==p.second) ans = max(ans,p.first);
        
    }
    return ans;
    
}
int main()
{
    vector<int> n = {2,2,3,3,3,3};
    cout<<findLucky(n);    
}