// In this article we will learn how to solve the most asked coding interview problem: 
//"Move all Zeros to the end of the array"

// Problem Statement: You are given an array of integers, your task
// is to move all the zeros in the array to the end of the array and move non-negative
// integers to the front by maintaining their order.


#include <iostream>

using namespace std;

void removeDupli(int arr[],int n){

    int j=1;
    int arr1[n]={0};
    arr1[0]=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr1[j]=arr[i];
            j++;
        }
    }
    int l=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<","<<endl;
    }
}

//better approach not using extra space 
void moveZeros(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++){
           arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

}

int main(){

    // int arr[]={ 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int arr[]={1,2,0,1,0,4,0};
    int n=7;
    moveZeros(arr,n);
    
}