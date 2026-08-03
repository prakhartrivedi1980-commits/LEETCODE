#include<bits/stdc++.h>
using namespace std;
int max_3(vector<int> &nums)
{   
    set<int> s(nums.begin(),nums.end());
    auto itr = s.end();
    if(s.size()<3)
    {
        advance(itr,-1);
        return *itr;
    }
    else
    {
        advance(itr,-3);
        return *itr;
    }

}
int main()
{
    vector<int>  m = {5,2,2};
    int maxx = max_3(m);
    cout<<maxx;
}