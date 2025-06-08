#include <iostream>
#include <algorithm>
using namespace std;

void rotateArr(int arr[], int n, int k) {

    //note:  if i have to n time then this work fines 
    // few changes were made in case of right rotation 
    // but let's move toward better approach down 
    for (int z = 0; z < k; z++) {
        int j = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = j;
    }

    // Output result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//left shifting 
void BruteRotateArr(int arr[],int n,int k){
     int temp[k]={0};
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }

    //temp
    cout<<"temp"<<endl;
    for (int i = 0; i < k; i++) { 
        cout << temp[i] << " ";
    }
    cout<<endl;
    
    //shifting
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }

    cout<<"arr"<<endl;
    for (int i = 0; i < n-k; i++) { 
        cout << arr[i] << " ";
    }
    cout<<endl;
    //merge 

    for(int i=k;i<n;i++){
        arr[i+1]=temp[i-k];
    }

    cout<<"final product"<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}




//optimal left approach 
void reverse(int arr[],int a,int b,int n){
    while(a<b){
        int temp=arr[a];
        arr[a]=arr[b-1];
        arr[b-1]=temp;
        a++;
        b--;
    }

}

void OptimaLeftRotateArr(int arr[],int n,int k){

    

    reverse(arr,0,k,n);
    reverse(arr,k,n,n);
    reverse(arr,0,n,n);
    cout<<"second appraoch"<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}






int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    
    //this is my approach self orientded
    rotateArr(arr, n, k);
     
    //app:2-
    //timecomplexity:- 0(n),but space is o(k)
    //here i tyr to store array 
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = 5;
    int k2 = 2;
    BruteRotateArr(arr1,n1,k2);

    //now we will see two diffreent approach and optimal one 
    //left shifting

    int arr2[] = {1, 2, 3, 4, 5};
    int n3 = 5;
    int k3 = 2;
    OptimaLeftRotateArr(arr2,n3,k3);




}


