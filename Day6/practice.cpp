#include<iostream>
using namespace std;

int main(){

    int i=20;
    cout<<sizeof(i)<<endl;  // 4 byte
    int *p=&i;
    cout<<sizeof(p)<<endl;  //  8 byte
    cout<<i<<endl;   // 20
    cout<<*p<<endl;  // 20
    i++;
    cout<<i<<endl;  // 21
    cout<<*p<<endl;   //21
   
    int a=*p;     // a=21.
    a++;         // a=22   . *p=21 
    cout<<a<<endl;   // 22 
    cout<<*p<<endl;  // 21
    
    i=12;
    cout<<i<<endl;  //  12 , i=20 , i=12 ..
    cout<<*p<<endl;  //  12 
    *p=23;
    cout<<i<<endl;  //   23  
    cout<<*p<<endl;  //  23 

    (*p)++;
    cout<<i<<endl;   // 24 
    cout<<*p<<endl;  // 24  (*p)++ => increment 1 ,23=23+1=24 
   






//     int i=10;
//     cout<<&i<<endl;

//     int *p=&i;
//     cout<<p<<endl; // address of i
//     cout<<i<<endl; // values stored in i
//     cout<<*p<<endl;   // value stored at address of i.

//     // cout<<p<<endl;

//     float f=10.2;
//     float *pf=&f;
    
//     double d=122.32;
//     double *pd=&d;
}
