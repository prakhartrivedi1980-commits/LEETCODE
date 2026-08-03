#include<bits/stdc++.h>
using namespace std;
int score(vector<string> &ops)
{
    vector<int> rec;
    int i=-1;
    int sum=0;
    auto itr = ops.begin();
    while(itr!=ops.end())
    {
        if((*itr) !="C" && *itr!="D" && *itr!="+")
        {
            rec.push_back(stoi(*itr));
            i++;
            //cout<<rec[i]<<endl;

        }   
        else if(*itr=="C")
        {
            rec.pop_back();
            i--;
            //cout<<i<<endl;
        } 
        else if(*itr =="D")
        {
            rec.push_back(rec[i]*2);
            i++;
            //cout<<rec[i];
        }
        else 
        {
            rec.push_back(rec[i]+rec[i-1]);
            i++;            
            //cout<<rec[i]<<endl;
        }
        itr++;
        

    }
    for(int i=0;i<rec.size();i++)
    {
        sum+=rec[i];
    }
    return sum;
}
int main()
{
    vector<string> ops = {"1","C"};
    int ans = score(ops);
    cout<<ans;
    /*while(itr!=ops.end())
    {
        cout<<static_cast<int>((*itr)[0])<<" "; 
        itr++;
    }*/
}