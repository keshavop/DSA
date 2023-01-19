#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 9;
    // int arr[]={1,5,9,8,7,6,69,26,46};
    int arr[]={1,3,5,7,9,11,13,15,17};
    cout<<checkSorted(arr,n);
    return 0;
}


// leetcode
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
class Solution
{
    public:
        bool check(vector<int> &nums)
        {
            int n = nums.size();
            int count = 0;
            for (int i = 1; i < n; i++)
            {
                if (nums[i - 1] > nums[i])
                {
                    count++;
                }
            }
            if (nums[n - 1] > nums[0])
                count++;
            
            // if count > 1 it means 2 values are greater than previous value
            if (count <= 1)
                return true;
            return false;
        }
};