//Header file designed for Q2 to Q6:
#include<iostream>

namespace rdm_name{
 int* Rdm(int n){
    int* temp_arr=(int *)malloc(n*sizeof(int));
    int random_num=0;
    for(int i=0;i<n;i++){
        random_num=1+(rand() % 99);
        //cout<<random_num<<endl;
        temp_arr[i]=random_num;
    }
    return temp_arr;
}
}