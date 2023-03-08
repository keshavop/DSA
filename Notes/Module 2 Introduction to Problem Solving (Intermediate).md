# Module 2

## Day 7 Introduction to Problem Solving

> 1. Check given number is Prime or not

```cpp
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
```

## Day 8 Introduction to Number System and Bit Manipulation

> 1. Every element repeats twice except 1, find unique element

- do xor of all elements
```cpp
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
  ```

> 2. Find missing element

```cpp
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
```

## Day 9 Introduction to Time Complexity Analysis

> 1. O notation
> 2. Right and left shift operators

## Day 10 Bit Manipulations and Time Complexity

> 1. Check the no. of 0th(zero) bit
> 2. count the no. of set bits
> 3. Check a number is a power of 2 or not

## Day 11 Arrays & Dynamic Arrays

> 1. Sort entire array
> 2. Reverse entire array
> 3. Subarray
> 4. Reverse subarray
> 5. Rotate entire array
> 6. Max subarray sum

## Day 12 Multidimensional Arrays

> 1. Print matrix row-wise
> 2. Get max column with sum
> 3. Search if k is present in the matrix
> 4. Find max no of 1's in a row in matrix
> 5. Print matrix in spiraly **(Google/Amazon)**

## Day 13 Doubt Session

> 1. Rotate N*N matrix with 90 degree
> 2. Print all anti diagonals
> 3. Get no. of set bits from 0 to 20
> 4. Count no of set bits from 1 to N

## Day 14 Problem on Arrays
> 1. Subsequence
- Given a string s, containing only lowercase characters, determine how many subsequences exist.

> 2. Closet Min - Max
- Given an array find the length of smaller sub array which contains both min and max elements of array within subarray

> 3. Max length consecutive 1's
- Given a binary string of length N. It is allowd to do almost ! swap between 0 and 1.
- The task is to find the length of the longest consecutive 1's that can be achieved.

## Day 15 Introduction to Hashing
> 1. Find frequency of numbers
- given N array elements and Q queries, for each query find the frequency of each element in array

> 2. Find the first non-repeating element
> 3. Find the intersection of 2 arrays (Both arrays will have distinct elements)
> 4. Given N array elements find number of distinct elements
> 5. Given N array elements check if there exists a pair(i,j) such that i!=j (arr[i]+arr[j]=k)

> 1. Find frequency of numbers
- given N array elements and Q queries, for each query find the frequency of each element in array

> 2. Find the first non-repeating element
> 3. Find the intersection of 2 arrays (Both arrays will have distinct elements)
> 4. Given N array elements find number of distinct elements
> 5. Given N array elements check if there exists a pair(i,j) such that i!=j (arr[i]+arr[j]=k)


## Day 16 Hashing Problems
> 1. Given N array elements check if there exists a pair(i,j) such that i!=j (arr[i]+arr[j]=k)
> 2. Given N array elements E and queries for every query (i,j) find sum of all elements in given range (i<=j) [Subarray]
> 3. Given N array elements, check if there exists a sub array with sum=0
> 4. Given N array elements, How many subarrays with sum = k
> 5. Given N array elements, get no of aub array with k odd numbers
> 6. [Anagram] 2 strings A &  are said to be anagrams of each other if they are permutation of each other.
> 7. given 2 strings A & B get how many sub-strings of A are an anagram of B [HARD]
> 8. given N array element check if all are distinct?
> 9. validate a Sudoko


## Day 20 Hashing Doubts
> 1. [Anagram] 2 strings A &  are said to be anagrams of each other if they are permutation of each other.
> 2. Is Dictionary
- arrange words or strings in dictionary order
> 3. Colourful numbers
- given an array of N elements, check if product of each subarray distinct
> 4. Given N array elements check the following:
- we need to have only 2 distinct numbers
- both distinct elements should have same frequency


## Day 21 Problem Solving 2
> 1. prefix sum
> 2.Pick from both sides [AMAZON]
-given an array arr[N] we pick B elements from either left or right end of an array. Find the return max possible sum.
- Note: At each turn we can pick an element either from Right end or Left end.
- Find max possible sum
> 3.Given an arr[n] construct left[] and right []
-left[] should contain max of elements from[0,i]
-right[] should contain max of elements from[i,N-1]
> 4. Rain water trapping
> 5.
> 6. Given an arr[N], it contains all the elements from [1,N+1] except 1 element, find the missing element.