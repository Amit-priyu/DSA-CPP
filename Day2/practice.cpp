#include<iostream>
using namespace std;

/*

*/
int main(){
     
    int n; 
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int d=2;
    bool divided=false;
    // n-> 2------------------------ n-1;
    while(d<n){
        if(n%d==0){
            cout<<"Not Prime"<<endl;
            divided=true;
        }
        d=d+1;
    }
    if(!divided){
        cout<<"Prime"<<endl;
    }

    


    // int n; cin>>n;
    // int i=1;
    // int sum=0;
    // while(i<=n){
    //     // cout<<i<<" "
    //     sum=sum+i;
    //     i=i+1;
    // }
    // cout<<sum<<endl;
    // Realtional operators.
    // int a; int b; 
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;

    // if(a==b){
    //     cout<<"equal"<<endl;
    // }
    // else if(a<b){
    //     cout<<"a is smaller "<<endl;l
    // }
    // else if(a>b){
    //     cout<<" a is greater "<<endl;
    // }
    // else {
    //     cout<<"Not equal"<<endl;
    // }
    // a=10 b=5  
    // bool isequal=(a==b);
    // bool isgreater=(a>b);
    // bool isless=(a<b);
    // cout<<"Are they equal"<<isequal<<endl;   // false 0 
    // cout<<"is A greater "<<isgreater<<endl;  //  true 1 
    // cout<<"is A less "<<isless<<endl;       //    false 0

    // bool third =isequal && isgreater;    // always false... 
    // bool fourth =isequal || isless;     // always false...
    // cout<<third<<endl;  // 0 
    // cout<<fourth<<endl;  //0
    // cout<<"Not equal "<< !isequal<<endl;

    // int f;
    // cout<<"Enter the value of farenhite"<<endl;
    // cin>>f;
    // int c=(5.0/9)*(f-32);
    // cout<<c<<endl;
    
    // int r=10%3;     //1
    // cout<<10%3<<endl;   //1















    // int a;
    // //a=10;
    // int b=20;
    // int c=a+b;
    // //long long int d=100034;
    // cout<<c<<"\n";


    // char ch='a'; 
    // cout<<ch<<endl;

    // float f=1.23; // 4 byte 
    // double d=12335.34; // 8 btye...

    // bool b1=true;
    // int size=sizeof(f);
    // cout<<size<<endl;
}