/*Check given number is Prime or not

0 -> False
1 -> true
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int primeOrNot(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << primeOrNot(n);
    return 0;
}