#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            // cout << "Found";
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 10;
    int x = 100;
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    cout<<linearSearch(arr, n, x);
    return 0;
}