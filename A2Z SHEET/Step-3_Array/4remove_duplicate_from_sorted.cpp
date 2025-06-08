

// Remove Duplicates in-place from Sorted Array

//approach -1 

// Let’s build intuition:
// Ek pointer rakho, for example:

// i — ye track karega ki next unique element kahan likhna hai.

// Fir tum j loop me chalao, aur check karo:

// agar arr[j] != arr[j-1], to ye ek naya element mila.

// to arr[i] = arr[j] karo, aur i++.



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
void opti_removeDupli(int arr[],int n){
    int j=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        cout<<arr[i]<<",";
    }

}

int main(){

    // int arr[]={1,1,2,2,2,3,3};
    // int n=7;
    
    int arr[]={1,1,1,2,2,3,3,3,3,4,4};
    int n=11;
    removeDupli(arr,n);
    //better optimized approach
    cout<<"better optimized appraoch"<<endl;

    opti_removeDupli(arr,n);
}