#include<iostream>
using namespace std;
int main(){
    int i=10;
    int *p=&i;
    int **p2++=&p;
    cout<<p2<<endl;   // 10
    cout<<&p<<endl;   // 10 
    cout<<p<<endl;   //10
    cout<<*p2<<endl; // address of p
    cout<<&i<<endl;  // address of i.
    cout<<i<<endl;  // 10
    cout<<*p<<endl;  // 10
    cout<<**p2<<endl;  // 10.
}