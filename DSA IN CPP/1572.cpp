#include<iostream>
#include<vector>
using namespace std;
int diagonalsum(vector<vector<int>>& mat)
{
    int sum =0;
    for(int i=0;i<mat.size();i++) //mat.size() = 3 = no. of rows
    {
        sum += mat[i][i]; //primary diagonal
        sum += mat[i][mat.size()-1-i]; //secondary diagoanl
    }
    if(mat.size()%2==1)
    {
        sum-= mat[mat.size()/2][mat.size()/2]; //to remove the central value due to its repeated sum
    }
    return sum;
    //mat[0].siuze() = no. of cols in row[0];
        
}
int main()
{
    vector<vector<int>> nums = {{1,2,3},{1,2,3},{1,2,3}};
    cout<<diagonalsum(nums);
}