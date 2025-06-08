#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int count(int N){
    int a=N;
    int c=0;
    while(a>0){
        a=a/10;
        c++;
    }
    return c;
}

bool Armstrong_num(int N){
    int c=count(N);
    int rem=0;
    int a=N;
    int b;

    while(a>0){
         b=a%10;
        rem=rem+round(pow(b,c));
        a=a/10;
    }
    
    if(rem==N){
        return true;
    }
    return false;

}

int main(){

    int N;
    cout<<"enter a number"<<endl;
    cin>>N;
    cout<<boolalpha<<Armstrong_num(N);
}