#include<iostream>
using namespace std;

int main(){
    int n,current,previous; cin>>n>>previous;
    bool isdec=true,weight=true;
    n--;
    while(n){
        cin>>current;
        // previous , current 
        // compare the different cases.
        if(current==previous){
            weight=false;
            cout<<"False"<<endl;
            break;
        }
        else if(current>previous){
            // prev=4, current =5 , isdec==true.
            if(isdec==true){
                isdec=false;
            }
            // isdec==false -> strictly increasing prev=4, current =5, ->>>>>>>>>>>
        }
        else{
            //curr<previous  curr=4, previous 8
            if(isdec==false){
              weight=false;
              cout<<"False"<<endl;
              break;
            }
        }
        // prev, current(while input)
        // previous -> current
        previous=current;
        n--;
        
    }
    if(weight==ture) cout<<"True"<<endl;
}