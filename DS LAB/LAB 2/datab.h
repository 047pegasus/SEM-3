//datab.h
#pragma once
#include<iostream>
namespace datab
{
    struct emp_data{
    int Emp_id=0;
    string Emp_name;
    string Emp_city;
    };
    
    struct emp_data ed[100];
    
    void emp_entry(int n){
      
        for(int i=0;i<n;i++){
                    cout<<"Enter employee number for Employee number:"<<i+1<<endl;
                    cin>>ed[i].Emp_id;
                    cout<<"Enter employee name for Employee number:"<<i+1<<endl;
                    cin>>ed[i].Emp_name;
                    cout<<"Enter employee city for Employee number:"<<i+1<<endl;
                    cin>>ed[i].Emp_city;
                }
                cout<<"Data entered successfully!!"<<endl;
    }
}
