#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum_even=0;
    int sum_odd=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        if(rem%2==0){
            sum_even=sum_even+rem;
        }
        else{
            sum_odd=sum_odd+rem;
        }
    }
    cout<<sum_even<<" "<<sum_odd<<endl;
	return 0;
}