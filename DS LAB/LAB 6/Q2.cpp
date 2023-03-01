#include <iostream>
#include "rdm.h"
using namespace std;
using namespace rdm_name;
void bubble_sort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int main()
{
    int n = 0;
    cout << "Enter n:";
    cin >> n;
    int *arr = new int(n);
    arr = Rdm(n);
    cout << "Before Bubble Sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    bubble_sort(arr, n);
    cout << "After Bubble Sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}