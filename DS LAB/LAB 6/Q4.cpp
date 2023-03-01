#include <iostream>
#include <bits/stdc++.h>
#include "rdm.h"
using namespace std;
using namespace rdm_name;
void Insertion_sort(int *arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    Insertion_sort(arr, n);
    cout << "After Selection Sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}