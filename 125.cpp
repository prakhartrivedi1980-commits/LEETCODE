#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    if(s.size()==1) return true;
    stack<char> s1;

    for(int i=0;i<s.size();i++)
    {
        
    }
    s.erase(remove_if(s.begin(), s.end(),[](unsigned char c){ return !isalnum(c); }),s.end());
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57))
        {
            s1.push(s[i]);
        }
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]=s[i]+32;
            s1.push(s[i]);
        }
    }    
    int j=0;
    while(!s1.empty())
    {
        
        if(s[j]==s1.top())
        {
            j++;
            s1.pop();
        }
        else return false;
    }
    return true;
}
int main()
{    
    string s = "0P";
    cout<<s<<endl;
    cout<<isPalindrome(s);
}