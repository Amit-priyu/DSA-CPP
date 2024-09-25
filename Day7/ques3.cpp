#include<iostream>
using namespace std;

/*
7 6 14
14 7 5
14 7 6
14 6 5 

*/
void Q(int z){
    z+=z; 
    cout<<z<<endl;
}
void P(int *y){
    int x=*y+2;
    Q(x);
    *y=x-1;
    cout<<x<<endl;
}
int main(){
    int x=5;
    P(&x);
    cout<<x<<endl;
    /*
    
    float arr[5]={12.5,10.0,13.5,90.5,0.5};
    float *ptr1=&arr[0];   // 1st element ..
    float *ptr2=ptr1+3;
    cout<<*ptr2<<" ";   // 90.5 
    cout<<ptr2-ptr1<<endl;     // 3-0=3
    */
     


    // char arr[20];
    // int i;
    // for(i=0; i<10; i++){
    //     *(arr+i)=65+i;
    // }
    // *(arr+i)='\0';    // *(arr+i)=== arr[i]
    // cout<<arr<<endl;
}


// int main(){
//     char *ptr;
//     char str[]="abcdefghijklmn";
//     ptr=str;
//     ptr+=5;
//     cout<<ptr;     // f g null 
//     /*
//     fg
//     cdef
//     defg
//     abcd
//     */
// }

// int main(){
//     int number[5];
//     int *p;
//     p=number;  // address of the first element.
//     *p=10;     // first value =10.
//     p=&number[2]; 
//     *p=20;    // value at 2nd index.. 20..
//     p--;      // pointer decrement. it will now point to 1st index.
//     *p=30;    // value at 1st index. 30.
//     p=number+3; // now it will 3rd index.
//     *p=40;      // 40 
//     p=number;
//     *(p+4)=50;   // 50..
//     for(int i=0; i<5; i++){    // 10 30 20 40 50 ..
//         cout<<number[i]<<" ";
//     }
//     /*
//     10 20 30 40 50
//     50 40 30 20 10
//     10 30 20 40 50
//     none of these.
//     */
// }