#include<bits/stdc++.h>
using namespace std;
int addDigits(int num) {
        int sum =0;
        int ld;
        while(num>0)
        {
            ld = num %10;
            sum += ld;
            num/=10;
        }
        if(sum % 10 == sum) return sum;
        else return addDigits(sum);
        
    }
int main()
{
    cout<<addDigits(13);

}