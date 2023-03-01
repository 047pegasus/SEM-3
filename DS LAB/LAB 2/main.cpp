#include<iostream>
#include<math.h>
using namespace std;
#include"datab.h"
using namespace datab;

void search_emp(int n,int k){
     cout<<"Searching for Emp_ID:"<<n<<endl;
     for(int j=0;j<k;j++){
         if(datab::ed[j].Emp_id==n){
            cout<<"Data found!!"<<endl;
            cout<<"Data: Employee ID: "<<datab::ed[j].Emp_id<<" Employee name: "<<datab::ed[j].Emp_name<<" Employee city: "<<datab::ed[j].Emp_city<<endl;
            goto V;
         }
         else{}
    }
   cout<<"Data not found for given Employee ID!!"<<endl;
   V:{}
 }

void emp_sort(int l){
 cout<<"Sorting started for given Emp_ID's in the database:"<<endl;
 int max_id=ed[0].Emp_id;
 int temp_emp_id=0;
 string temp_emp_name;
 string temp_emp_city;
 for(int i=0;i<l;i++){
    if(ed[i].Emp_id>=max_id){
        temp_emp_id=ed[i].Emp_id;
        ed[i].Emp_id=ed[i+1].Emp_id;
        ed[i+1].Emp_id=temp_emp_id;

        temp_emp_name=ed[i].Emp_name;
        ed[i].Emp_name=ed[i+1].Emp_name;
        ed[i+1].Emp_name=temp_emp_name;

        temp_emp_city=ed[i].Emp_city;
        ed[i].Emp_city=ed[i+1].Emp_city;
        ed[i+1].Emp_city=temp_emp_city;
    }
    else{}
    cout<<"Data sorted successfully!!"<<endl<<"Printing sorted now:"<<endl;
    for(int i=0;i<l;i++){
        cout<<"Data: Employee ID: "<<datab::ed[i].Emp_id<<" Employee name: "<<datab::ed[i].Emp_name<<" Employee city: "<<datab::ed[i].Emp_city<<endl;
    }
  }
}

 int count=0;

void count_emp(){
    int n=11;
    while(n!=0){
        if (ed->Emp_id!=0)
        {
            count++;
            n--;
        }
        else{n--;}
    }
}

void add_emp(int cnt){
    cout<<"Add 5 more employees to the database:"<endl;
    for (int i = cnt; i < cnt+5; i++)
    {
        cout<<"Enter employee number for Employee number:"<<i+1<<endl;
        cin>>ed[i].Emp_id;
        cout<<"Enter employee name for Employee number:"<<i+1<<endl;
        cin>>ed[i].Emp_name;
        cout<<"Enter employee city for Employee number:"<<i+1<<endl;
        cin>>ed[i].Emp_city;
    }
    
}


int main(){
    int q=0;
    S:
    cout<<"Enter question number to start the program with:"<<endl;
    cin>>q;
    switch(q){
        //Question 1
        case 1:{
                int n=1;
                cout<<"Enter the number of fibonacci series you want to print:"<<endl;
                cin>>n;
                int s=0,f=1;
                cout<<"Fibonacci series is :"<<s<<","<<f<<",";
                int nxt_sm=0;
                for(int i=2;i<=n-2;i++){
                    nxt_sm=f+s;
                    s=f;
                    f=nxt_sm;
                    cout<<nxt_sm<<",";
                }
            break;
        }
        //Question 2
        case 2:{
                int n=1;
                int sum=0;
                cout<<"Enter the series limit upto n:"<<endl;
                cin>>n;
                cout<<"The value of the series is:";
                for (int i = 1; i < n; i++)
                {
                    sum+=i*i;
                }
                cout<<"The sum upto n for given series is:"<<sum<<endl;
            break;
        }
        //Question 3
        case 3: {
                int a,b=0;
                cout<<"Enter value of a,b"<<endl;
                cin>>a,b;
                int result = min(a, b);
                while (result > 0) {
                    if (a % result == 0 && b % result == 0) {
                        break;
                    }
                    result--;
                }
                cout<<”The GCD of entered a and b is :”<<result;
            break;
        }
        //Question 4
        case 4:{
                int a,b=0;
                int sum=0;
                cout<<"Enter the numbers to be multiplied using addition:"<<endl;
                cin>>a,b;
                for(int i=1;i<=b;i++){
                    sum+=a;
                }
                cout<<"The value of a*b using additive multiplication is:"<<sum<<endl;
            break;
        }
        //Question 5
        case 5:{ int sz=0;
            cout<<"Enter the size of the binary number in digits:"<<endl;
                cin>>sz;
                int *bin;
                bin = new int[sz];
                cout<<"Enter binary number:"<<endl;
                for(int j=0;j<sz;j++){
                    cout<<"Enter the binary value for position:"<<j<<endl;
                    cin>>bin[j];
                }
                int dec=0;
                for (int i = sz; i >= 0; i--)
                {
                    dec+=bin[i]*pow(2,sz-i);
                }
                cout<<"The decimal value for entered binary number is:"<<dec<<endl;
            break;
        }
        //Question 6
        case 6:{ int dec=0;
                int bin[20]={0};
                cout<<"Enter the decimal number to be converted into binary format:"<<endl;
                cin>>dec;
                int i=0;
                int temp_bin[20];
                while(dec!=0){
                    temp_bin[i]=dec%2;
                    dec=dec/2;
                    i++;
                }
                for (int i = 0; i < 20; i++)
                {
                    bin[i]=temp_bin[19-i];
                }
                cout<<"The binary equivalent of given decimal number is:"<<endl;
                for (int i = 0; i < 20; i++)
                {
                    cout<<bin[i];
                }
            break;
        }
        //Question 7
        case 7:{ int i, j, rows, columns, a[10][10];
 	    cout<<” Enter Number of rows and columns of the matrix to be entered  :  ";
 	    cin>>i>>j;
 	    cout<<”Enter matrix elements ";
 	    for(rows = 0; rows < i; rows++){
   		    for(columns = 0;columns < j;columns++){
      		    cin>>a[rows][columns];
    	    }
  	    }
     
 	    for(rows = 0; rows < i; rows++)	{
  		    cout<<endl;
   		    for(columns = 0; columns < j; columns++){
    			if(rows >= columns)
    			{
    				cout<<a[rows][columns];
			    }
			    else
		    	{
				    printf("0  ");
			    }
   	 	    }   
  	    }

        break;
        }
        //Question 8
        case 8:{ int n,r=0;
                int n_fact=1;
                int r_fact=1;
                int nr_fact=1;
                cout<<"Enter the value of n and r:"<<endl;
                cin>>n,r;
                //Calculating n!
                for (int i = 1; i <= n; i++)
                {
                    n_fact*=i;
                }
                //Calculating r!
                for (int i = 1; i <= r; i++)
                {
                    r_fact*=i;
                }
                //Calculating (n-r)!
                for (int i = 1; i <= (n-r); i++)
                {
                    nr_fact*=i;
                }
                //Calculating value for nCr
                int res=n_fact/(nr_fact*r_fact);
                cout<<"The value of combinational factor nCr for given n and r is:"<<res<<endl;
            break;
        }
        //Advanced Problems
        //Question 9
        case 9:{
             int maxcnt=0;
             int max_freq_elem=0;
             for(int i=0;i<n;i++) {
                int count=0;
                for(int j=0;j<n;j++){
                    if(arr[i] == arr[j])
                    count++;
                }
                if(count>maxcnt){
                    maxcnt=count;
                    max_freq_elem = arr[i];
                }
     
             }
          break;
        }
        //Question 10
        case 10:{
                int no_of_emp=0;
                cout<<"Enter the number of Employees in the database:"<<endl;
                cin>>no_of_emp;
                cout<<"Enter employee database values:"<<endl;
                datab::emp_entry(no_of_emp);
                    //Custom functions
                    int i=0;
                    cout<<" Enter the Employee ID of employee to be searched:";
                    cin>>i;
                    search_emp(i,no_of_emp);
                    emp_sort(no_of_emp);
                    count_emp();
                    add_emp();
            break;
        }
        default:{
            cout<<"Enter correct question number to start with!!"<<endl;
            goto S;
        }
    }
    return 0;
}
