#include <bits/stdc++.h>
using namespace std;

void majorityelem(int n, vector<int> &arr) {
    
    unordered_map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;

    for(auto it:mpp){
        if(it.second>n/2){
            cout<<it.first<<" i m majority elem";
        }
        
    }
    
}
}

int main(){
    int n = 7;
    vector<int> arr = {2,2,1,1,1,2,2};
    majorityelem(n, arr);
}