#include <iostream>
#include <math.h>

using namespace std;

int linear_search(int *arr, int sz, int n)
{
    int index = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
}

int del(int *arr, int n, int s)
{
    int index = -1;
    for (int i = 0; i < n; i++)
        if (arr[i] == s)
            index = i;
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = 0;
    return index;
}

int dupl(int *arr, int n)
{
    int temp = arr[0], d = -1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                d = j;
        }
    return d;
}

int main()
{
    int choice = 0;
A:
    cout << "Enter the question number:" << endl;
    cin >> choice;
    switch (choice)
    {

    case 1:
    {
        char arr_temp[50];
        char temp;
        int sz = 0;
        for (int i = 0; i < 50; i++)
        {
            cin >> temp;
            if (temp != ' ')
            {
                arr_temp[i] = temp;
            }
            else
            {
                break;
                sz = i + 1;
            }
        }

        char *arr_orig;
        arr_orig = new char[sz + 1];
        int pos = 0;
        cout << "Enter the position to enter the character in the array:" << endl;
        cin >> pos;
        char temp_char;
        cout << "Enter the character to be entered in this array:" << endl;
        cin >> temp_char;
        for (int i = 0; i < sz; i++)
        {
            if (i < pos)
            {
                arr_orig[i] = arr_temp[i];
            }
            else if (i == pos)
            {
                arr_orig[i] = temp_char;
            }
            else
            {
                arr_orig[i] = arr_temp[i - 2];
            }
        }
        cout << "The new array with inserted value is :" << endl;
        for (int i = 0; i < sz; i++)
        {
            cout << arr_orig[i];
        }

        break;
    }

    case 2:
    {
        int *arr;
        arr = new int[10];
        cout << "Enter the array elements:" << endl;
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        int search = 0;
        cout << "Enter the value to be searched in the array:" << endl;
        cin >> search;
        int arr_size = sizeof(arr) / sizeof(int);
        int res = linear_search(arr, arr_size, search);
        if (res < 0)
        {
            cout << "Data not Found!!" << endl;
        }
        else
        {
            cout << "Data Found at index:" << res;
        }
        break;
    }

    case 3:
    {
        int n = 0;
        cout << "Enter the size of array:\n";
        cin >> n;
        int s, arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter the element to be deleted:\n";
        cin >> s;
        int index = del(arr, n, s);
        if (index == -1)
        {
            cout << "Error: element not found\n";
        }
        else
        {
            cout << "Element Successfully Deleted\n";
        }
        break;
    }

    case 4:
    {
        int n = 0;
        cout << "Enter the size of array:\n";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int d = dupl(arr, n);
        if (d == -1)
           { cout << "No Duplicate Element Found in the array\n"; }
        else
           { cout << "There are Duplicate Element in the array at index " <<d; }
        break;
    }

    case 5:
    {
        // To be solved later!!
        break;
    }

    case 6:
    {
        cout<<"Already solved as Q10 in Lab 2 in Advanced Practise Problems"<<endl;
        break;
    }

    default:
    {
        cout << "Enter correct question number!!" << endl;
        goto A;
        break;
    }
    }
    return 0;
}