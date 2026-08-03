#include<bits/stdc++.h>
using namespace std;
int maxprofit(vector<int> &prices)
{
    int buy,sell,profit=0,maxprofit=0;
    buy = prices[0];
    for(int i=1;i<prices.size();i++)
    {
        sell = prices[i];
        if(sell>buy)
        {
            profit = sell - buy;
        }
        else{
            buy = prices[i];
        }
        maxprofit = max(maxprofit,profit);
    }
    return maxprofit;

}
int main()
{
    vector<int> p = {7,1,5,6,3};
    cout<<maxprofit(p);
}
