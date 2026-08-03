#include<bits/stdc++.h>
using namespace std;
string longprefixx(vector<string> &strs)
{ 
    if(strs.size()==1) return strs[0];
        vector<string> s = {strs.begin(),strs.end()};
    string ans;
    for(int i=0;i<strs.size()-1;i++)
    {
        string s1 = strs[i];
        string s2 = s[i+1];
        //int size1 = s1.size();
        //int size2 = s2.size();
        string temp = "";
        int final_size = s1.size()>s2.size() ? s2.size() : s1.size();
        for(int j=0;j<final_size;j++)
        {   
            if(s1[0]!=s2[0]) break; 
            if(s1[j]==s2[j]) temp.push_back(s1[j]);   
            //else temp = "";                 
        }
        ans = temp;
    }
    return ans;
    
    
    
}
int main()
{
   vector<string> strs = {"cir","car"};
   cout<<strs[0]<<endl;  
   cout<<strs[1]<<endl;  
   cout<<strs[2]<<endl;  
   cout<<longprefixx(strs);
   
}