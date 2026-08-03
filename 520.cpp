#include<bits/stdc++.h>
using namespace std;
bool detectCapital(string s)
{
    int cap =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z') cap++;
    }
    if(cap == s.length()) return true;
    if((s[0]>='A' && s[0]<='Z')&&cap == 1) return true;
    if(cap == 0) return true;
    return false;
}
int main()
{
    string s;
    cin>>s;
    cout<<detectCapital(s);
}
