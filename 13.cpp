#include<bits/stdc++.h>
using namespace std;
int roman(string s)
{
    int ans=0;
    map<char,int> value = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    for(int i=0;i<s.size();i++)
    {
            if (i + 1 < s.size() && value[s[i]] < value[s[i + 1]])
        ans -= value[s[i]];
    else
        ans += value[s[i]];
    }
    return ans;
}
int main()
{
    string s = "XLIX";
    cout<<roman(s)<<" ";
}
