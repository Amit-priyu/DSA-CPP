#include<iostream>
using namespace std;

int main(){
    int i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    int *p; // p is a pointer of type integer..
    
    // wrong process. 
    /*
    cout<<p<<endl; // garbade address allocate.. 
    cout<<*p<<endl;   //  random address allocated -> int vvalue read..   0
    (*p)++;        // increment -> 1 
    cout<<*p<<endl;    //   cout<<1<<endl;
    
    */
}