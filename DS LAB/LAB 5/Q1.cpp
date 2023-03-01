#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int arr[],int key,int low,int high){
    int mid=(high+low)/2;
    if(key==arr[mid]){
        return mid;
    }
    else if(key>arr[mid]){
        return binary_search(arr, key,low=mid+1,high);
    }
    else if(key<arr[mid]){
        return binary_search(arr,key,low,high=mid-1);
    }
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    cin>>k;
    int h=sizeof(arr)/sizeof(int);
    cout<<binary_search(arr,k,0,h-1);
    return 0;
}
