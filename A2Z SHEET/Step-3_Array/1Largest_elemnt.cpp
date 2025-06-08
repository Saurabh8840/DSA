#include <iostream>

using namespace std;

int main(){
    int n=5;
    int arr[5]={2,5,1,3,0};

    int max=arr[0];
    for(int i=1;i<n;i++){
         if(max<arr[i]){
              max=arr[i];
         }
    }
    cout<<max;
};