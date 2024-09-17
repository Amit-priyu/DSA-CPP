#include<iostream>
using namespace std;


bool isprime(int n){
    int d=2;
    while(d<n){
        if(n%d==0){
            return false;   // 0 -> not prime..
        }
        d++;
    }
    return true;
}
//  function -> print number from 1 to n..
void print_1_n(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    // bool ans=isprime(31);
    // cout<<ans<<endl;
    print_1_n(10);
}