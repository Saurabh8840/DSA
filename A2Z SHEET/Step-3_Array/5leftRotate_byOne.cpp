


#include <iostream>

using namespace std;



void rotateArr(int arr[],int n){
    int j=arr[0];
    for(int i=0;i<n-1;i++){
        
            arr[i]=arr[i+1];
            
    }
    arr[n-1]=j;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

}

int main(){

    // int arr[]={1,1,2,2,2,3,3};
    // int n=7;
    
    int arr[]={1,2,3,4,5};
    int n=5;

    rotateArr(arr,n);
}