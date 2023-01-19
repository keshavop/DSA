/*
Missing number in array

Approach 1 -> find sum of first n no and subtract the sum of array elements.

Approach 2 -> find xor of n elements and then find xor of all array elements and then al last find xor of n and xor of array ele
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Approach 1
// Time -> 0(n)
// Space -> 0(1)
int missingElement1(int n, int arr[])
{
    int totalSum = (n * (n + 1)) / 2;

    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
    }

    int missingEle = totalSum - currSum;
    return missingEle;
}

// Approach 2
// Time -> 0(n)
// Space -> 0(1)
int missingElement2(int n, int arr[])
{
    int x1 = 0;
    int x2 = 0;

    for (int i = 0; i <= n; i++)
    {
        x1 = x1 ^ i;
    }

    for (int i = 0; i < n - 1; i++)
    {
        x2 = x2 ^ arr[i];
    }

    int missingEle = x1 ^ x2;
    return missingEle;
}

int main()
{
    int n = 7;
    int arr[n] = {2, 3, 7, 6, 4, 5};
    cout << missingElement1(n, arr) << endl;
    cout << missingElement2(n, arr);
    return 0;
}