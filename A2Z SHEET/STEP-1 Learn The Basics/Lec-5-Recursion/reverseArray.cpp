#include <iostream>

using namespace std;


// void reverseArray(int arr[],int n,int i){
//     if(i>n)return;
//     cout<<arr[n-i];
//     reverseArray(arr,n,i+1);
// }

void reverseArray(int arr[],int start,int end){
   if(start<end){
    swap(arr[start],arr[end]);
    reverseArray(arr,start+1,end-1);
   }
}

int main(){

    int n=5,i=1;
    
    cout<<"enter a num: ";
    int arr[n]={1,2,3,4,5};
    reverseArray(arr,0,n-i);
}