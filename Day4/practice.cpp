#include<iostream>
using namespace std;

void B(){
    cout<<5<<endl;
}
int A(int a){
    cout<<1<<endl;
    B();
    cout<<2<<endl;
}
int main(){
    int n=10;
    cout<<3<<endl;
    int ans=A(n);
    cout<<4<<endl;
}

// output->5 