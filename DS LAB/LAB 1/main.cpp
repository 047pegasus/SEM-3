#include<iostream>
#include<iomanip>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    int ch=0;
    A:
    cout<<"Enter the question number:";
    cin>>ch;
    switch(ch){
        //Question1
        case 1: {cout<<setw(10)<<"**TO FIND LARGEST ELEMENT OF AN ARRAY**"<<endl;
                cout<<"Enter original array to be sorted:"<<endl;
                int *arr = NULL;
                int n=0;
                cout<<"Enter number of elements in the array:"<<endl;
                cin>>n;
                arr= new int[n];
                for(int i=0;i<n;i++)
                    {cin>>arr[i];}
                    cout<<"Array inserted successfully!!"<<endl;
                    cout<<"Starting operation!!"<<endl;
                    int large= arr[0];
                for(int j=0;j<n;j++){
                        if(arr[j]<arr[j+1]){
                            large=arr[j+1];
                        }
                        else{}
                }
                    cout<<"The largest number in the array is:"<<endl;
                    cout<<large;
                break;
                }
        //Question2
        case 2: {cout<<"Enter original array data from which data set is to be searched!!"<<endl;
                int *arr= NULL;
                int n;
                cout<<"Enter number of elements in the original array!"<<endl;
                cin>>n;
                arr= new int[n];
                cout<<"Enter array elements:"<<endl;
                for (int i = 0; i < n; i++)
                {
                    cin>>arr[i];
                }
                int query;
                cout<<"Enter the value of data to be searched for:"<<endl;
                cin>>query;
                cout<<"SEARCHING STARTED!!"<<endl;
                for (int i = 0; i < n; i++)
                {
                    if(arr[i]==query){
                        cout<<"Data found and query matched in the array at position:"<<i<<endl;
                        goto ex;
                    }
                    else{
                    }
                }
                cout<<"The data query searched is not found in the array!!"<<endl;
                ex:
                break;
                }
        //Question3
        case 3: {
                int num=0;
                int fact=0;
                cout<<"Enter the number for being checked if it is prime or not>>:"<<endl;
                cin>>num;
                for (int i = 2; i <= sqrt(num); i++)
                {
                    if(num%i==0)
                    {fact++;}
                    else{}
                }
                if(fact==1){
                    cout<<"The number is prime!!"<<endl;
                }
                else{
                    cout<<"The number is not prime!!"<<endl;
                }
                break;
                }

        //Question4
        case 4: {int x,y=0;
                int pow=1;
                cout<<"Enter base x:"<<endl;
                cin>>x;
                cout<<"Enter power for base y:"<<endl;
                cin>>y;
                for(int i=1;i<=y;i++){
                        pow=x*x;
                }
                cout<<"Value of x^y is :"<<pow<<endl;
                break;
        }
        //Question5
        case 5: {
                char *str_orig;
                int n=0;
                char ch_rep;
                char ch_replacer;
                cout<<"Enter the string length"<<endl;
                cin>>n;
                str_orig=new char[n+1];
                cout<<"Enter a string first to start the question:"<<endl;
                cin>>str_orig;
                cout<<"Enter the character to be replaced form the string:"<<endl;
                cin>>ch_rep;
                cout<<"Enter the character to be replaced with:"<<endl;
                cin>>ch_replacer;
                cout<<"Starting the replacement"<<endl;
                for (int i = 0; i < n; i++)
                {
                        if(str_orig[i]==ch_rep){
                                str_orig[i]=ch_replacer;
                        }
                        else{}
                }
                cout<<"The edited string with replaced character is :"<<str_orig<<endl;
                
                break;
                }
        //Question6
        case 6: {
                int sz=0;
                int n=0;
                char *str_orig;
                cout<<"Enter the string length to be enetered:"<<endl;
                cin>>n;
                str_orig=new char[n+1];
                cout<<"Enter the string to be reversed:"<<endl;
                cin>>str_orig;
                cout<<"Starting reversal process:"<<endl;
                char *str_rev;
                str_rev= new char[n+1]; 
                sz=n+1;
                for (int i = 0; i<=sz; i++)
                {
                        str_rev[i]=str_orig[n+1];
                        n--;
                }
                cout<<"The reversed string is :"<<str_rev<<endl;               
                break;
        }
        //Question7
        case 7: {int n=0;
                cout<<"Enter no of elements in the array to be sorted:"<<endl;
                cin>>n;
                int *arr;
                arr= new int[n];
                cout<<"Enter elements in the original array unsorted:"<<endl;
                for(int i=0;i<n;i++){
                        cin>>arr[i];
                }
                cout<<"Array elements entered successfully!!"<<endl;
                char choice;
                C:
                cout<<"Enter the type of sorting to be performed:"<<endl<<"1.) 'A' or 'a' for ascending order."<<endl<<"2.) 'D' or 'd' for descending order."<<endl;
                cin>>choice;
                if(choice=='A' || choice=='a')
                {
                        cout<<"You choose Ascending sorting of the array;"<<endl;
                        int min=arr[0];
                        for (int i = 0; i < n; i++)
                        {
                                if(arr[i]<min){
                                        min=arr[i];
                                }
                        }
                        
                }
                else if(choice=='D' || choice=='d'){

                }
                else{
                        cout<<"Enter a valid choice again!!"<<endl;
                        goto C;
                }
                break;
        }
        //Question8
        case 8: {
                
                break;
        }
        //Question9
        case 9: {
                char *str1;
                char *str2;
                str1=new char[100];
                str2=new char[100];
                cin>>str1;
                cin>>str2;
                int cnt=0;
                for(int i=0;i<100;i++){
                        if(str1[i]!='\0'){
                                cnt++;
                        }
                        else{
                                break;
                        }
                }
                str1=(char *)realloc(str1, cnt);
                cnt=0;
                for(int i=0;i<100;i++){
                        if(str2[i]!='\0'){
                                cnt++;
                        }
                        else{
                                break;
                        }
                }
                str2=(char *)realloc(str2, cnt);
                char *str3;
                int count = 0;
                int i,j;
                for(i=0;*str1!=NULL;i++,*str1++)
                {
                count++;
                }
                for(j= 0; *str2!=NULL;j++,*str2++)
                {
                count++;
                }
                str3 =  new char[sizeof(str1)+sizeof(str2)];
                for(i=0;str1[i]!=NULL;i++)
                {
                str3[i] = str1[i];
                for(j= 0; str2[j]!=NULL;j++,i++)
                 {
                 str3[i] = str2[j];
                 }
                }
                 cout<<endl;
                 cout<<"String 3 is = ";

                  while(*str3)
                 {
                  cout<<*str3++;
                 }
                break;
        }
        //Question10
        case 10:{
                int n;
                cout<<"Enter the size of array you want to create:"<<endl;
                cin>>n;
                int *array;
                array=new int[n];
                cout<<"Array of size "<<n<<" generated successfully!!"<<endl;
                int srch;
                cout<<"Enter the element to be searched for:"<<endl;
                cin>>srch;
                for (int i = 0; i <n; i++)
                {
                        if(array[i]==srch){
                                cout<<"The element is found successfully at position:"<< n<<endl;
                                exit(0);
                        }
                        else{

                        }
                }
                cout<<"The element requested for search operation was not found in the array elemnts provided!!"<<endl;
                break;
        }
        //Question11
        case 11:{ 
                struct time
                {
                int hr=0;
                int min=0;
                int sec=0;
                };

                time t1;
                time t2;
                cout<<"Enter time 1 hours:"<<endl;
                cin>>t1.hr;
                cout<<"Enter time 1 minutes:"<<endl;
                cin>>t1.min;
                cout<<"Enter time 1 seconds:"<<endl;
                cin>>t1.sec;
                cout<<"Enter time 2 hours:"<<endl;
                cin>>t2.hr;
                cout<<"Enter time 2 minutes:"<<endl;
                cin>>t2.min;
                cout<<"Enter time 2 seconds:"<<endl;
                cin>>t2.sec;
                cout<<"Time data entered is:"<<t1.hr<<":"<<t1.min<<":"<<t1.sec<<"and "<<t2.hr<<":"<<t2.min<<":"<<t2.sec<<"respectively."<<endl;

                int hr_diff,min_diff,sec_diff=0;
                if(t1.hr>t2.hr){
                        hr_diff=t1.hr-t2.hr;
                }
                else{
                        hr_diff=t2.hr-t1.hr;
                }
                
                if(t1.min>t2.min){
                        min_diff=t1.min-t2.min;
                }
                else{
                        min_diff=t2.min-t1.min;
                }

                if(t1.sec>t2.sec){
                        sec_diff=t1.sec-t2.sec;
                }
                else{
                        sec_diff=t2.sec-t1.sec;
                }
                
                cout<<"The time difference between entered time is: "<<hr_diff<<":"<<min_diff<<":"<<sec_diff<<endl;
                break;
        }
        //Question12
        case 12:{
                struct complex{
                        int real=0;
                        int imag=0; 
                };

                complex compadd(complex comp1,complex comp2){
                       complex res;
                        res.real=comp1.real+comp2.real;
                        res.imag=comp1.imag+comp2.imag;
                        return res;
                };

                
                complex c1;
                complex c2;
                complex c_res;
                cout<<"Enter complex number 1 real part and imaginary part respectively:"<<endl;
                cin>>c1.real>>c1.imag;
                cout<<"Enter complex number 2 real part and imaginary part respectively:"<<endl;
                cin>>c2.real>>c2.imag;
                c_res=compadd(c1,c2);
                cout<<"The additive result of the two complex numbers provided is:"<<c_res.real<<"+"<<c_res.imag<<endl;
                break;
        }
        default: cout<<"Enter correct question number to proceed further:";
                    goto A;
                break;
    }
    return 0;
}
