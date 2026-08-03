#include<bits/stdc++.h>
using namespace std;
int strSTR(string haystack,string needle)
{
    //int cnt = 0;
    int n = needle.size();
    //int h = haystack.size();
    int i = 0;
    while(i<haystack.size())
    {
        string temp;
        temp = haystack.substr(i,n);
        //cout<<temp<<" ";
        if(temp==needle) return i;
        i=i+1;        
    }
    return -1;
}
int main()
{
    string haystack = "mississipi";
    string needle = "issi";
    cout<<strSTR(haystack,needle);
}