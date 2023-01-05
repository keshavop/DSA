// GCD of 2 numbers

// Time -> O(n) Big-oh
// Space -> O(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout<<gcd(a, b);
    return 0;
}