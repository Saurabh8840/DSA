




#include <iostream>
#include <vector>

using namespace std;

void missingnum(int a[],int n){

    int max=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
          c++;
        }
        if(a[i]==0){
          c=0;
        }
        if(max<c){
            max=c;
        }

    }
    cout<<max;
}

int main(){

    int a[] = {1, 1, 0, 1, 1, 1};
    int n=6;

    // app-1- using hashing
    missingnum(a,n);
    
}