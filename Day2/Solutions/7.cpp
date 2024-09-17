#include<iostream>
using namespace std;
int main(){
     int n;
    cin>>n;
    
    int i=1; //for the row
    while(i<=n){
        int j=1; // j for the column
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
