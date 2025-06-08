#include <iostream>

using namespace std;

void printNum(int n){

    //base case
    if(n==0) return;

    //print
    cout<<n<<endl;
    printNum(n-1);
}

int main(){

    int n,i=1;
    cout<<"enter a num: ";
    cin>>n;

    printNum(n);
}