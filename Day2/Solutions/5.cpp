#include<iostream>
using namespace std;

int main() {
    int x,n;
    cin>>x>>n;
    int ans=1;
    while(n>0){
        ans=ans*x;
        n--;
    }
    cout<<ans<<endl;
    return 0;
}