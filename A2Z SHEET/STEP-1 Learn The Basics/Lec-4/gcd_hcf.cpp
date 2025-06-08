#include <iostream>
#include <vector>
#include <bits/stdc++.h>


using namespace std;


//here what i did is 
//take two number like a ,then divide it with 1 to a;
//so that i get how many number a is divisible by 
//now store all number in to vector 
//now i have two vector okk
//compare the greatest common number and give it to the output okk

void greatestgcd(int a,int b){
    vector<int>arr;
    
    for(int i=1;i<a;i++){
        if(a%i==0){
            arr.push_back(i);
        }
    }
    
    vector<int>arr1;
    for(int i=1;i<b;i++){
        if(b%i==0){
            arr1.push_back(i);
            
        }
    }

    int gcd=1;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr1.size();j++){
            if(arr[i]==arr1[j]){
                gcd=max(gcd,arr1[j]);
            }
        }
    }
    cout<<"greatest common divisor is : "<<gcd;
}




//another approach optimal

//n1,n2 = 9,12
//largest is 12 now form 1 to 12 divide with every numb both together 
// and you get the common number which is divisible by both okk
//find the largest number among that one 
//note run for min of (9,12) bcz 10,11 not make sense for 9



///now running euclidian algorithm 

void gcd_euclidean(int a,int b){

    while(a>0 & b>0){

        if(a>b){
            a=a%b;

        }else{
            b=b%a;
        }
    }
    if(a==0){cout<<"as per euclidean : "<<b;}
    if(b==0){cout<<"as per euclidean : "<<a;}
}



int main(){

    int a,b;
    cout<<"enter a "<<endl;
    cin>>a;
    cout<<"enter b "<<endl;
    cin>>b;
    greatestgcd(a,b);
    
    //ecludian approach 
    gcd_euclidean(a,b);
}

