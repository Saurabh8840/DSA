#include <iostream>
#include <vector>

using namespace std;

void printarr(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
         cout<<arr[i]<<",";
    }
    cout<<endl;
}

void Merge(vector<int>&arr,int low,int mid,int high){
      
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
             temp.push_back(arr[right]);
             right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
    
}

void Mergesort(vector<int>arr,int high,int low){
    if(low>=high)return;
    int mid=(low+high)/2;
    Mergesort(arr,low,mid);
    Mergesort(arr,mid+1,high);
    Merge(arr,low,mid,high);

   

}

int main(){

    vector<int> arr={64,25,12,22,11};
    int low=0;
    int n=5;
    int high=n-1;
    Mergesort(arr,high,low);
    printarr(arr);
    
}