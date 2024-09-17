#include<iostream>
using namespace std;



void increment(int a){
    a=a+1;
    return a;
}


// what will be the output of this ????   // 10/20
void fun(int a){
    int b=10;
    a=b+10;
    cout<<a<<" ";
}
int main(){
   int a=10;
   fun(a);
   cout<<a<<" ";
}



// find the error in the code....

/*
int fact(int n){
    cout<<a<<endl;   // error..
    int ans=1;
    for(int i=1; i<=n; i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int a; cin>>a;
    int output=fact(a);
    // 1st error.
    cout<<ans<<endl;
    cout<<output<<endl;
}

*/