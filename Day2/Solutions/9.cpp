#include<iostream>
using namespace std;


int main(){
    int  n;
    cin>>n;
    int i=1;
    int k=n;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<k;
            j++;
        }
        cout<<endl;
        i=i+1;
        k--;
    }
    return 0;
}