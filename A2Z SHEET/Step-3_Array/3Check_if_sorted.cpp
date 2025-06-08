#include <iostream>

using namespace std;

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};

    int count=0;
    for(int i=1;i<n;i++){
         if(arr[i-1]>arr[i]){
             count++; 
         }
    }
    if(arr[0]<arr[n-1]){
        count++;
    }
    if(count<=1){
        cout<<"sorted";
    }else{
        cout<<"not sorted";
    }
};