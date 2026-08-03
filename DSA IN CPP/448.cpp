#include<bits/stdc++.h>
using namespace std;
vector<int> disappear(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dis(n+1,0);
  //  cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        dis[nums[i]]++;
    }
    //auto itr = dis.begin();
//  for(int i:dis) cout<<i<<" ";
    for(int i=1;i<dis.size();i++)
    {
        if(dis[i]==0)
        {
            cout<<i<<" ";
            dis.push_back(i);        
        }
        
    }
    //dis.erase(dis.begin()+0);
    dis.erase(dis.begin()+0,dis.begin()+n+1);
//  cout<<endl;
// for(int i:dis) cout<<i<<" ";
    
    return dis;
/*int n = nums.size();
    vector<int> dis(n+1,0);
    vector<int> ans;

//  cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        dis[nums[i]]++;
    }
//  auto itr = dis.begin();
//  for(int i:dis) cout<<i<<" ";
    for(int i=1;i<dis.size();i++) 
    {
        if(dis[i]==0)  ans.push_back(i);            
    }
    
//  dis.erase(dis.begin()+0);
//    dis.erase(dis.begin()+0,dis.begin()+n+1);
//  cout<<endl;
//  for(int i:dis) cout<<i<<" ";
    
    return ans;
*/

}
int main()
{
    vector<int> nums = {1,1};
    vector<int> ans = disappear(nums);
    cout<<endl;
    for(int i:ans) cout<<i<<" ";

}