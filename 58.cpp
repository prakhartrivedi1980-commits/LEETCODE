#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s)
{
    int cnt = 0; 
    int flag =1;
    //cout<<s.size()<<endl<<s[10]<<endl;
    for(int i=s.size()-1;i>=0;i--)
    {
        if((s[i]==' '||s[i]=='\t')&&cnt!=0) break;
        else if(s[i]>=97&&s[i]<=122 || s[i]>=65&&s[i]<=90) cnt++;
        //else if(s[i]>=65&&s[i]<=90) cnt++;
        else continue;
    }
    return cnt;
}
int main()
{
    cout<<lengthOfLastWord("luffy is still   joyboy    ");

}