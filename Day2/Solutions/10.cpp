#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
        // spaces
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces=spaces+1;
        }
        
        // for printing the stars
        int stars=1;
        while(stars<=i){
            cout<<"*";
            stars=stars+1;
            
        }
        stars=i-1;
        while(stars>=1){
            cout<<"*";
            stars=stars-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
