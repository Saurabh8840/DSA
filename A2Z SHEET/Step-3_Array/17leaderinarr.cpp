#include <bits/stdc++.h>
using namespace std;

void leader(int n, vector<int> &arr) {
    
    vector<int>arr1;
    int max;
    int count;
    for(int i=0;i<n;i++){
        max=arr[i];
        count=0;
        for(int j=i+1;j<n;j++){
             if(arr[j]>max){
               count=1;
             }
             
        }
        if(count==0){
            arr1.push_back(max);
        }
    }
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }

    }
    


int main(){
    int n = 6;
    vector<int> arr = {10,22,12,3,0,6}; 
    leader(n, arr);
}