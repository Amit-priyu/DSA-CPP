#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int basic_salary;
    cin>>basic_salary;
    char ch;
    cin>>ch;
    double totalsalary;
    double hra=(0.2*basic_salary);
    double da=(0.5*basic_salary);
    double pf=(0.11*basic_salary);
    
    int allow;
    if(ch=='A'){
        allow=1700;
    }
    else if(ch=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    totalsalary=basic_salary+hra+da+allow-pf;
    int ans=round(totalsalary);
    cout<<ans<<endl;
	return 0;
}
