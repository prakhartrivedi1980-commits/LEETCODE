#include<bits/stdc++.h>
using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

   for(int j=0,i=m;j<n,i<m+n;j++,i++)
   {
      nums1[i] = nums2[j];
   }
   for(int i=1;i<m+n;i++)
   {
      int item = nums1[i];
      for(int j=i-1;j>=0&&nums1[j]>item;j--)
      {
         nums1[j+1] = nums1[j];
         nums1[j] = item;

      }
   }
        
        
}
int main()
{
   vector<int> a ={1,2,4,0,0,0};
   vector<int> b ={3,5,6};
   merge(a,3,b,3);
   for(int i:a) cout<<i<<" ";
}