#include<iostream>
using namespace std;
// +1 4 bytes, next address.
void increment1(int **p){
    p=p+1;
}
// yees
void increment2(int **p){
    *P=*p+1;
}
// value 1 increment.
void increment3(int **p){
   **p=**p+1;
}
int main(){
    int i=10;     //i- 1000
    int *p=&i;   // p adress - 800

    int **p2=&p;   // double pointer.
    cout<<p2<<endl;   //800 
    cout<<&p<<endl;  //  800 

    cout<<p<<endl;   // 1000
    cout<<*p<<endl;  // 10
    cout<<&p<<endl;  // 800

    cout<<i<<endl;   // 10
    cout<<*p<<endl;  // 10
    cout<<**p2<<endl;   // 10
}