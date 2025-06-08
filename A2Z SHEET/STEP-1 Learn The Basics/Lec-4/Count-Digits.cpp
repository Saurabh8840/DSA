

#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"enter a value : "<<endl;
    cin>>N;
    int digit=0;
    while(N>0){
        digit++;
        N=N/10;
        
    }
    cout<<"length of N :"<<digit<<endl;
}