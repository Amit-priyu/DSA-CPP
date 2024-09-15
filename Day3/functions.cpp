#include<iostream>
using namespace std;

// return-type  name-of-function (input){}
int factorial(int n){
    int ans=1;
    int i=1;
    while(i<=n){
        ans=ans*i;
        i++;
    }
    return ans;
}

/*
functions.cpp: In function 'int main()':
functions.cpp:21:39: error: invalid operands of types 'int' and '<unresolved overloaded function type>' to binary 'operator<<'
   21 |     float ans=fact_n/(fact_r*fact_n_r)<<endl;
      |               ~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~
PS C:\Users\Amit Priyu\OneDrive\Desktop\cpp and Dsa\Day3> 

*/
int main(){
    int n,r; cin>>n>>r;

    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_n_r=factorial(n-r);
    float ans=fact_n/(fact_r*fact_n_r);
    cout<<ans<<endl;

    /*
    int fact_n=1;
    int i=1;
    while(i<=n){
        fact_n=fact_n*i;
        i++;
    }
    
    int fact_r=1;
    i=1;
    while(i<=r){
        fact_r=fact_r*i;
        i++;
    }

    int fact_n_r=1;
    i=1;
    while(i<=n-r){
         fact_n_r= fact_n_r*i;
        i++;
    }

    cout<<fact_n/(fact_r*fact_n_r)<<endl;
    */
}