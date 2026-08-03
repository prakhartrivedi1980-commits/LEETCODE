#include<bits/stdc++.h>
using namespace std;
int cookies(vector<int> g, vector<int> s)
{
    int cnt=0;
    for(int i=0,j=0;i<g.size()&&j<s.size();j++)
    {     
        if(s[j]>=g[i])
        {
            cnt+=1;
            i++;
        }          
    }
    return cnt;
}
int main()
{
    vector<int> g ={1,2};
    vector<int> s = {1,2,3};
    
    cout<<cookies(g,s);
}