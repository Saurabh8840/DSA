#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={10,5,10,15,10,5};
    int l=sizeof(arr)/sizeof(arr[0]);
    
    unordered_map<int,int>map;

    for(int i=0;i<l;i++){
        map[arr[i]]++;
    }

    int minF=n,maxF=0;
    int minE=0,maxE=0;

    for(auto it:map){
        int count=it.second;
        int element=it.first;
    }

    if(count>maxFreq){
        maxE=element;
        maxF=count;
    }
    if(count<minF){
        minE=element;
        minF=count;
    }
    cout<<maxE<<endl;
    cout<<minE<<endl;



    

}