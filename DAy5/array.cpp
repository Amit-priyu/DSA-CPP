#include<iostream>
using namespace std;
// input array-> 1,45,78,90 : 1 45 78 90
void printarray(int input[],int n){
    // address of 0th index.
    // cout<<sizeof(input)/sizeof(int)<<endl;
    for(int i=0; i<n; i++){
        cout<<input[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int input[100];
    cout<<sizeof(input)<<endl;  // 400
    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    printarray(input,n);

    // for(int i=0; i<n; i++){
    //     cout<<input[i]<<" ";
    // }
}