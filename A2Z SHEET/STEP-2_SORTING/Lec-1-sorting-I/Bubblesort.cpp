#include <iostream>

using namespace std;

void Bubblesort(int arr[],int n){

    //yaad rakhna hame valuue nhi change krni acutal value change krni hai dost 
    
      
    for(int i=n-1;i>0;i--){
        
        for(int j=0;j<i;j++){
            
            cout<<arr[j]<<" _"<<arr[j+1]<<endl;

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            cout<<arr[j]<<" "<<arr[j+1]<<endl;
        }
        
    }
}

int main(){

    int arr[]={64,25,12,22,11};
    int n=5;
    Bubblesort(arr,n);
    for(int i=0;i<n;i++){
         cout<<arr[i]<<",";
    }
}