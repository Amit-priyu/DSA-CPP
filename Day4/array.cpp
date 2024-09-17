#include<iostream>
using namespace std;


int main(){
    int n; cin>>n;
    int arr[100];   // constant size ......
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    // find the largest element
    // what if n is 0?
    //int max=arr[0];   // n=0 max as a arr[0];
    // max-> initiliase neg infity INT_MIN
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            // max -update
            max=arr[i];
        }
    }
    cout<<max<<endl;
}

// how array is stored
// how array is working with function.-------- pointer....