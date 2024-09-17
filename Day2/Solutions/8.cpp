#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i=1; // for the row
    while(i<=n){
        int k=i;  // for printing 
        int j=1; // for the column
        while(j<=i){
            cout<<k;
            k--;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}
