#include <iostream>
#include<bits/stdc++.h>
#include "rdm.h"
using namespace std;
using namespace rdm_name;
void selection_sort(int *arr, int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
int main()
{
    int n = 0;
    cout << "Enter n:";
    cin >> n;
    int *arr = new int(n);
    arr = Rdm(n);
    cout << "Before Selection Sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    selection_sort(arr, n);
    cout << "After Selection Sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}