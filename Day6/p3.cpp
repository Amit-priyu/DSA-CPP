#include<bits/stdc++.h>
using namespaces std;


int main(){
    int a = 50;
    int *ptr = &a;
    cout << (*ptr)++ << “ “;
    cout << a << endl;
}