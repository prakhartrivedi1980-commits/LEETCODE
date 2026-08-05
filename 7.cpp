#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    if (x < 10 && x > -10)
        return x;
    long long int temp = x;

    if (temp < 0)
        temp *= -1;

    long long int rem;
    long long int rev = 0;

    while (temp % 10 == 0)
    {
        temp /= 10;
    }
    while (temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (rev > INT_MAX || rev < INT_MIN)
        return 0;
    if (x < 0)
        return (rev * (-1));
    return rev;
}
int main()
{
    long long int x = 12313213524655154545;
    cout << reverse(x);
}