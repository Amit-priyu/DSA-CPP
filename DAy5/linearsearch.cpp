#include<iostream>
using namespace std;

bool linearsearch(int input[],int n,int element){
    for(int i=0; i<n; i++){
        if(input[i]==element) return true;
    }
    return false;
}

int binarysearch(int input[],int n, int element){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(input[mid]==element) {
            return mid;
        }
        else if(input[mid]>element){
            // left part.
            end=mid-1;
        }
        else{
            mid+1;
        }
        mid=(start+end)/2;
    }
    // element input -> not present
    return -1;
}

/*
Day  3 and Day 4 -> all problems with solution _> push everything to ur github account.
Day 5 -> linear search aur binary search -> write code of both in seprate file by yourself.

// sorting alogorith...
selection, bubble sort, insertion sort..
2-d array.... 


*/