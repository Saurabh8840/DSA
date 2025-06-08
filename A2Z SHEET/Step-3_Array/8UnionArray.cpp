


#include <iostream>
#include <vector>

using namespace std;

void unionArray(int a[],int b[],int n1,int n2){
     
    vector<int>u;
    int i,j=0;
    while(i<n1 && j<n2){

        if(a[i]<=b[j]){
            if(u.size()==0||u.back()!=a[i]){
                u.push_back(a[i]);
            }
            i++;
        }
        else{
            
            if(u.size()==0||u.back()!=b[i]){
                u.push_back(b[i]);
            }
            j++;
        }
    }
    while(i<n1){
        if(u.size()==0||u.back()!=a[i]){
                u.push_back(a[i]);
        }
    }
    while(j<n2){
        if(u.size()==0||u.back()!=a[i]){
                u.push_back(a[i]);
        }
    }


    for(int i=0;i<u.size();i++){
        cout<<u[i]<<",";
    }
   
}

int main(){

    // int arr[]={ 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n1=10;

    int b[]={2,3,4,4,5,11,12};
    int n2=7;
    unionArray(a,b,n1,n2);
    
}