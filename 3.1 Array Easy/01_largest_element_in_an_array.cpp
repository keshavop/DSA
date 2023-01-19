#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int largestElement(int arr[], int n){
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[res]){
            res = i;
        }
    }
    return res;
}

int main()
{
    int n = 9;
    int arr[]={1,5,9,8,7,6,69,26,46};
    int index = largestElement(arr,n);
    cout<<arr[index];
    return 0;
}