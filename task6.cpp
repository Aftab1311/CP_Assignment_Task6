
/* Question-1 
Given two arrays: arr1[0..m-1] and arr2[0..n-1]. Find whether arr2[] is a subset of arr1[] or not. Both the  arrays are not in sorted order. It may be assumed that elements in both array are distinct. (Use Hash Table  for the same) 
Examples: 
Input: arr1[] = {11, 1, 13, 21, 3, 7}, arr2[] = {11, 3, 7, 1}  
Output: arr2[] is a subset of arr1[] 
Input: arr1[] = {1, 2, 3, 4, 5, 6}, arr2[] = {1, 2, 4}  
Output: arr2[] is a subset of arr1[] 
Input: arr1[] = {10, 5, 2, 23, 19}, arr2[] = {19, 5, 3}  
Output: arr2[] is not a subset of arr1[]
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSubset(int A1[], int m, int A2[], int n)
{
    set<int> hashset;
    for (int i = 0; i < m; i++)
    {
        hashset.insert(A1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (hashset.find(A2[i]) == hashset.end())
            return false;
    }
    return true;
}

int main()
{
    int A1[] = {1,2,3,4,5,6,7,8,9,0};
    int A2[] = {11,4,5,7,9,0,};
    int m = sizeof(A1) / sizeof(A1[0]);
    int n = sizeof(A2) / sizeof(A2[0]);

    if (isSubset(A1, m, A2, n))
        cout << "A2 is subset of A1 "<< "\n";
    else
        cout << "A2 is not a subset of A1 "<< "\n";
    return 0;
}
