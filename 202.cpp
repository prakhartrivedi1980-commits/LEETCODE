#include<bits/stdc++.h>
using namespace std;
set<int> visited;
bool ishappy (int n)
{
    int sum = 0;
    int ld;
    int temp = n;
    
    if(visited.count(n)) return false;
    
    //to detect the cycle(terminating condition), .count(n) check if number already exist or not in set
    
    visited.insert(n); 
    while(n>0)
    {
        ld = n % 10;
        sum = sum + pow(ld,2);
        n=n/10;

    }
    
    if(sum == 1 ) return true;
    
    else return ishappy(sum);

}
int main()
{
    int i;
    cout<<"Enter a number : ";
    cin>>i;
    cout<<ishappy(i);

}