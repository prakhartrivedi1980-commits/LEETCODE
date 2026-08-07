#include<bits/stdc++.h>
using namespace std;
string longprefixx(vector<string> &strs)
{
    if(strs.size()==1) return strs[0];
    string ans = strs[0];
    for(int i=1;i<strs.size();i++)
    {
        string s1 = ans;
        string s2 = strs[i];

        string temp = "";
        int final_size = s1.size()>s2.size() ? s2.size() : s1.size();
        for(int j=0;j<final_size;j++)
        {   
            
            if(s1[j]==s2[j]) temp.push_back(s1[j]);   
            else break;                 
        }
        ans = temp;
        if(ans=="") return "";
    }
    return ans;
}

int main()
{
   vector<string> strs = {"flower","flow","flight"};
   /*cout<<strs[0]<<endl;  
   cout<<strs[1]<<endl;  
   cout<<strs[2]<<endl;*/  
   cout<<longprefixx(strs);
   
}

