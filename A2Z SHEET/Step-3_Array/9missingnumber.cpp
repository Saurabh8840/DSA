


#include <iostream>
#include <vector>

using namespace std;

void missingnum(int a[],int n){
     
    int hash[n];
    for(int i=0;i<n-1;i++){
        hash[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
             cout<<i;
             break;
        }
    }
    
   
}

int main(){

    // int arr[]={ 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int a[] = {1,2,3,5};
    int n=5;

    
    missingnum(a,n);
    
}