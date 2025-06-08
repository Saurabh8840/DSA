#include <iostream>

using namespace std;


// void reverseArray(int arr[],int n,int i){
//     if(i>n)return;
//     cout<<arr[n-i];
//     reverseArray(arr,n,i+1);
// }

void reverseArray(string str,int start,int end){
   if(start<end){
    swap(str[start],str[end]);
    reverseArray(str,start+1,end-1);
   }
}

int main(){

    int n=5,i=1;
    
    string  str="ABCDCBA";

    string ab=str;
    reverseArray(str,0,n-i);
    if(ab==str){
        cout<<"is palindrome";

    }
    else{
        cout<<"not palindrome";
    }
}