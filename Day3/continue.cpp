#include<iostream>
using namespace std;

int main(){
    int i=1; 
    // 1-> 10 --- 7 skip...8
    while(i<=10){
        if(i==7){
            i++;
            continue;   // skip the current iteration....
            
        }
        cout<<i<<endl;
        i++;
    }
}