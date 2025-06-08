#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isprime(int N){
    for(int i=2;i<sqrt(N);i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    cout<<"enter a number ";
    cin>>N;
    cout<<boolalpha<<isprime(N);
}