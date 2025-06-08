#include <iostream>

using namespace std;

void Insertionsort(int arr[],int n){

    //yaad rakhna hame valuue nhi change krni acutal value change krni hai dost 
    
      
    for(int i=1;i<n;i++){
        
        for(int j=i;j>0;j--){
            cout<<arr[j]<<" _"<<arr[j-1]<<endl;
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }else{
                break;
            }
            cout<<arr[j]<<" "<<arr[j-1]<<endl;

        }
        
    }
}

int main(){

    int arr[]={64,25,12,22,11};
    int n=5;
    Insertionsort(arr,n);
    for(int i=0;i<n;i++){
         cout<<arr[i]<<",";
    }
}