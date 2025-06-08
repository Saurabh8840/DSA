#include <iostream>
#include <bits/stdc++.h>



using namespace std;

void hash_map(int arr[],int l){

    
    
    for(int i=0;i<l;i++){
       cin>>arr[i];
    }

    int hash[12]={0};
    for(int i=0;i<5;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<l;i++){
        cout<<arr[i]<<" : "<<hash[arr[i]]<<endl;
    }
}

void unorderedmap(int arr[],int l){
    


    unordered_map<int ,int>map;
    
    for(int i=0;i<l;i++){
        map[arr[i]]++;

    }

    for(auto x:map){
        cout<<x.first<<" "<<x.second<<endl;
    }

}

int main(){
    cout<<"enter length of arr : ";
    int l;
    int i=0;
    cin>>l;
    cout<<endl;
    int arr[l];
    
    for(int i=0;i<l;i++){
       cin>>arr[i];
    }
    
    hash_map(arr,l);

    //same question solving using unorderd_map;

    unorderedmap(arr,l);

}