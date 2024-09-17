#include<iostream>
using namespace std;
int btod(int n){
    int ans=0;
    int bvalue=1;
    while(n>0){
        int last_digit=n%10;
        ans=ans+(last_digit*bvalue);
        bvalue=bvalue*2;
        n=n/10;
    }
    return ans;
}
int main(){
    int n;cin>>n;
    cout<<btod(n)<<endl;
}