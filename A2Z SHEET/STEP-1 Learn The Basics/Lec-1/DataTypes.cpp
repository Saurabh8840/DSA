// Strivers A to Z DSA course is a comprehensive resource for interview preparation.
// 02:14 Master one language before diving into data structures and algorithms
// 07:23 Printing in C++ using endl and backslash n
// 09:42 Reading inputs and using libraries in C++
// 14:02 Data types in C++ include long, float, double, string, character.
// 16:22 String manipulation in C++
// 20:12 Integer ranges and their use in programming.
// 22:04 Understanding if-else statements in programming
// 26:18 Writing a program to grade marks based on given conditions.
// 28:25 Introduction to usage of else if in C++
// 32:44 Explanation of nested if statements
// 34:44 Nested if-else statements and switch statements covered
// 38:27 Switch statement and the use of default
// 40:30 Arrays are used to store similar data types multiple times.
// 44:44 Data types must match the declared type for storage
// 46:49 Arrays in C++ can be declared and used to store values with indexing starting from zero.
// 50:51 Understanding the use of characters and strings in C++
// 52:57 Explanation of for loop and variable declaration in C++
// 57:15 You can write if conditions inside for and while loops.
// 59:31 Basic concept of do-while and while loops
// 1:03:27 Void functions do not return anything.
// 1:05:27 Parameterized void function allows reusability of code by taking a name and printing it.
// 1:09:39 Understanding the flow of execution in a C++ function call
// 1:11:38 Brief overview of functions and inbuilt functions in C++.
// 1:15:58 Understanding Pass by Value in C++
// 1:18:25 Understanding pass by value and pass by reference in C++
// 1:22:55 Arrays are passed by reference in C++.
// 1:24:56 Functions passed by reference and value time complexity


//pass by value in c++
//you call a function and pass var by value the function gets a copy 
//change made inside function do not affect the rogiinal one 

#include <iostream>
using namespace std;

void change(int x){
    //pass by value 
    x=100;
    cout<<x<<endl;
}
void changebyref(int &c){

    //pass by reference
    //you pass address of var not a copy 
    //change inside the function do affect the original var

  c=120;
  cout<<c<<endl;
}
int main(){
    int a=10;
    change(a);
    cout<<a<<endl; 
    //chlo test krte hai pass by reference 
    int b=20;
    changebyref(b);
    cout<<b; 

    //
    int arr[5]={1,2,3,5,6};
    //in no need to write &arr[] - it's already by reference 
    
}



//pass by reference okk

