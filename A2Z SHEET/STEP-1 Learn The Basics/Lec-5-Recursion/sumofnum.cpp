#include <iostream>

using namespace std;

void printNum(int n,int sum,int i){

    //base case
    if(i>n){
        cout<<sum;
        return;
    }
    sum=sum+i;
    //print
    
    printNum(n,sum,i+1);
    
}

int main(){

    int n,i=1,sum=0;
    cout<<"enter a num: ";
    cin>>n;

    printNum(n,sum,i);
}