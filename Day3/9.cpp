#include<iostream>
using namespace std;

int main(){
    int n,previous;
    cin>>n>>previous;
    int current;
    n--;
    bool isweight=true;
    bool isdec=true;
    while(n){
       cin>>current;
       // comaparision...
       if(current==previous){
        // simply cout false, and return
        isweight=false;
        cout<<"False"<<endl;
        break;
       }
       else if(current>previous){
        if(isdec==true){
            isdec=false;
        }
       }
       else{
        // curr<previous
        if(isdec==false){
            isweight=false;
            cout<<"false"<<endl;
            break;
        }
       }
       //current -> previous , current ->user input,,,
       previous=current;
       n--;
    }
    if(weight==true){
        cout<<"true"<<endl;
    }
}