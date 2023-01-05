/*
    Repeated element in an array
    -> just do xor among all elements of an array
    -> repeated elements will cancel each other
*/

// Time -> 0(n)
// Space -> 0(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int repeatedElement(int n,int arr[]){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n = 5;
    int arr[n] = {3, 4, 8, 3, 4};
    cout<<repeatedElement(n,arr);
    return 0;
}