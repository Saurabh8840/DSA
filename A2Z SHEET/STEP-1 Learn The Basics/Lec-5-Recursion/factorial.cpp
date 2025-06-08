#include <iostream>

using namespace std;

// void printFact(int n,int fact){

//     base case
//     if(n<1){
//         cout<<fact;
//         return;
//     }
//     fact=n*fact;
//     return printFact(n-1,fact);
//     //print
    
    
    
// }

int printFact(int n){

    
    if(n==0) {
        return 1;
    }
    
    return n*printFact(n-1);
    //print

}

int main(){

    int n;
    cout<<"enter a num: ";
    cin>>n;

    cout<<printFact(n);
}