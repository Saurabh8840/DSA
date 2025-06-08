#include <iostream>

using namespace std;

void print_name(string name,int n,int i){
      
    if(i>n) return;
    cout<<i<<"."<<name<<" ";
    print_name(name,n,i+1);

}

int main(){
    
    string name="saurabh";
    int n,i=1;
    cout<<"number of time: ";
    cin>>n;
    print_name(name,n,i);

}