#include <iostream>

using namespace std;

void selectionsort(int arr[],int n){

    //yaad rakhna hame valuue nhi change krni acutal value change krni hai dost 
    
      
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

int main(){

    int arr[]={64,25,12,22,11};
    int n=5;
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
         cout<<arr[i]<<",";
    }
}