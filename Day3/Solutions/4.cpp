#include<iostream>
using namespace std;

int main(){
    int x; cin>>x;
    int count=0;
    int n=1;
    while(count != x){
        int a=3n+2;
        if(a%4 != 0){
            cout<<a<<" ";
            count++;
        }
        n++;
    }
}