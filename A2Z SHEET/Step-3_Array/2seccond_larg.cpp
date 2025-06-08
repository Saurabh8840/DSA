#include <iostream>

using namespace std;

int main(){
    int n=6;
    int arr[n]={1,2,4,7,7,5};

    int max=arr[0];
    int smax=arr[0];
    for(int i=1;i<n;i++){
         if(max<arr[i]){
              smax=max;
              max=arr[i]; 
         }
         if(arr[i]<max&& smax<arr[i]){
          smax=arr[i];
         }

    }
    cout<<smax;
};