#include<iostram>
using namespace std;

// intersection... of array.. a-> element, a2->element,,,,, intersection-> array 
// pair sum ... array -> 2 pair of element which is equal to sum of a number..

// sort 0 and 1.  array 0,1,1,0,1,0-> sort_> final output-> 0,0,0,1,1,1,
// Linear search,, 
// Binary search,selctioin sort,bubble sort, insertion sort, char array, 2-d array -> 
int findunique(int *arr,int size){
    for(int i=0; i<size; i++){
        int j=0;
        while(j<size){
            if(i !=j && arr[i]==arr[j]){
                break;
            }
            j++;
        }
        if(j==size){
            return arr[i];
        }
    }
}
int dublicatenumber(int *arr,int size){
    for(int i=0; i<size;i++){
        for(int j=i+1; j<size;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}
bool linearsearch(int arr[],int element,int n){
    for(int i=0; i<n; i++){
        if(arr[i]==element){
            // element is present,
            return true;
        }
    }
    return false;
}
/*

a[5] -> 2,78,90,67,34    
element :- 90
90-> present, true. else -false

*/