#include <bits/stdc++.h>
using namespace std;

void maxsum(int n, vector<int> &arr) {
    
    
    int max=0;
    int sum;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
             sum=sum+arr[j];
             if(max<sum){
            max=sum;
        }
        }
        

    }
    cout<<"max = "<<max;
}


int main(){
    int n = 9;
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    maxsum(n, arr);
}