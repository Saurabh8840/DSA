#include <iostream>

using namespace std;

int main(){
    int N;
    cout<<"enter a number : ";
    cin>>N;
    int res=0;
    while(N>0){
        int rem=N%10;
         res=res*10+rem;
        N=N/10;
    }
    cout<<res;
}