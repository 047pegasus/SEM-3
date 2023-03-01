#include<iostream>
using namespace std;

int arr_inc_dec(int arr[],int n){
for (int i = 0; i < n; i++)
{
    if(arr[i]>arr[i+1]&&arr[i]>arr[i+2]){
        return i+1;
    }
}

return -1;
}

int main(){
    int n=0;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    int arr[n];
cout<<"Enter an array of integers as described in question:"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<arr_inc_dec(arr,n);
return 0;
}
