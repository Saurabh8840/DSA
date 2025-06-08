#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool ls(vector<int>&arr,int a){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==a){
            return true;
        }
    }
}

void longcons(vector<int>&arr,int n){

    int max=0;
    int x;
    int cnt=1;
    for(int i=0;i<n;i++){
        x=arr[i];
        cnt=1;
        while(ls(arr,x+1)==true){
            x=x+1;
            cnt=cnt+1;
        }
        if(max<cnt){
            max=cnt;
        }
    }
    cout<<max;
}

int main(){

    int n=9;
    vector<int>arr={102,4,100,1,101,3,2,1,1};
    //bruteforce
    longcons(arr,n);
}