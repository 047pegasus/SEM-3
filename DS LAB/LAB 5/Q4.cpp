#include<iostream>
using namespace std;

int main()
{   int n=0;
    cout<<"Enter the number of elements you want in an array to be enetered:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count_arr[2][n]={0,0};
    for (int i = 0; i < n; i++) {
        count_arr[0][i]=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==count_arr[0][i]){
            count_arr[1][i]++;
        }
    }
    int max_count=count_arr[1][0];
    int element=0;
    for (int i = 0; i < n; i++)
    {
        if(count_arr[1][i]>max_count){
            max_count=count_arr[1][i];
            element=count_arr[0][i];
        }
    }
    cout<<"Element :"<<element<<"occurred max no of times i.e.: "<<max_count<<endl;
    return 0;
}
