#include<iostream>
using namespace std;

int main(){
    int n,choice;
    cin>>n>>choice;
    int sum=0; int product=1; int ans=-1;
    if(choice==1){
      for(int i=0; i<=n; i++){
        sum=sum+i;
      }
      cout<<sum<<endl;
    }
    else if(choice==2){
        // product
        for(int i=1; i<=n; i++){
            product=product*i;
        }
        cout<<product<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}