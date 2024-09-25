#include<iostream>
using namespace std;


int main(){
    int a=100;
    int *p=&a;
    int **q=&p;
    int b=(**q)++;
    int *r=*q;
    (*r)++;
    cout<<a<<" "<<b<<endl; 
    /*
    101 100   
    101 101   
    102 101
    102 100  correct...
    */
}

// int main(){
//     int a=100;   // p- 1000, q-2000 
//     int *p=&a;
//     int **q=&p;
//     int b=(**q)++ + 4;
//     cout<<a<<" "<< b<<endl;   
//     // 100 105 
// }
// int main(){

//     int a=10;
//     int *p=&a;
//     int **q=&p;
//     int b=20;
//     *q=&b;
//     (*p)++;
//     cout<<a<<" "<<b<<endl; 
//     /*
//     10 21 -----------------
//     11 20  shu  2
//     11 21
//     10 20   1
    
//     */
// }