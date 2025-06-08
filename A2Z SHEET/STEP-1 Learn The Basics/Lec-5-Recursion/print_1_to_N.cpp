#include <iostream>

using namespace std;

void printNum(int n,int i){

    //base case
    if(i>n) return;
    //print
    cout<<i<<endl;
    printNum(n,i+1);
}

int main(){

    int n,i=1;
    cout<<"enter a num: ";
    cin>>n;

    printNum(n,i);
}