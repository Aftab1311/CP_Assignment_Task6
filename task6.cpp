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