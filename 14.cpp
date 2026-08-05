class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        //vector<string> s = (strs.begin(),strs.end());
    string ans = strs[0];
    for(int i=1;i<strs.size();i++)
    {
        string s1 = ans;
        string s2 = strs[i];
        //int size1 = s1.size();
        //int size2 = s2.size();
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
};
