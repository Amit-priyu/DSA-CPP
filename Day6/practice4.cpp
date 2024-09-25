#include<iostream>
using namespace std;

int main(){

    int a[10];  // ex --- a 700.. 
    cout<<a<<endl;    // 700
    cout<<&a[0]<<endl;   // 700 
    a[0]=12;
    a[1]=112;
    cout<<*a<<endl;   // 12 
    cout<<*(a+1)<<endl;  // 12
    int *p=&a[0];  
    cout<<a<<endl;  // 700
    cout<<p<<endl;   //  700 

    cout<<&p<<endl;  // 900
    cout<<&a<<endl;    // 0th index ka address.. 
    cout<<sizeof(p)<<endl;  // 8
    cout<<sizeof(a)<<endl;  // 40 
    /*
     int a[10];
    
    a[0]=5;
    a[1]=10;
    a[2]=188;
    cout<<a<<endl;  // address of 0th index.. *a -> go to address stored in a , and fetch the value stored there
    cout<<&a[0]<<endl;
    cout<<*a<<endl; // 5
    cout<<*(a+1)<<endl;   // 11 10 
    cout<<*(a+2)<<endl;   // 188
    */
}