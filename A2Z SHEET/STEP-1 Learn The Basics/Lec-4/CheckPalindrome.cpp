#include <iostream>

using namespace std;

bool ispalindrome(int N){
    int a=N;
    int pali=0;
    while(a>0){
        pali=pali*10+a%10;
        a=a/10;
    }
    if(pali==N){
        return true;
    }
    return false;
}

int main(){
    cout<<"enter a num to check panlidrome :";
    int N;
    cin>>N;
    cout<<boolalpha<<ispalindrome(N);
}