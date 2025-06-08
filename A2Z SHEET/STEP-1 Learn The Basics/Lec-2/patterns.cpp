#include <iostream>
using namespace std;

void patternOne(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//two
void patternTwo(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//three

void patternThree(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

//four
void patternFour(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}

//Five

void patternFive(){
    for(int i=0;i<5;i++){
        //or
        //for(int j=1;j<=5-i;j++)
        //
        for(int j=5-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

//six
void patternSix(){
    for(int i=0;i<5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

//Seven
void patternSeven(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//Eight

void patternEight(){
    int N=5;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=1;j<2*N;j++){
            cout<<"*";
            
        }
        N--;
        cout<<endl;
    }
}

//pattern Nine
void patternNine(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int N=5;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=1;j<2*N;j++){
            cout<<"*";
            
        }
        N--;
        cout<<endl;
    }

}

//ten

void patternTen(){
    
    for(int i=0;i<8/2+1;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<8/2;i++){
        for(int j=i;j<8/2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//eleven

void patternEleven(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<"1 ";
                }else{
                    cout<<"0 ";
                }
            }
            else{
                if(j%2==0){
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
        }
        cout<<endl;
    }

}

//Twelve

void patternTwelve(int N){
    int space=2*(N-1);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<"-";
        }
        //last
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
    
}

//thirteen
void patternThirteen(int N){
    int a=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<i+1;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

//fourteen

void patternFourteen(int N){
    
    for(int i=0;i<N;i++){
        char a='A';
        for(int j=0;j<i+1;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}


//FIFTEEN

void patternFifteen(int N){
    
    for(int i=0;i<N;i++){
        char a='A';
        for(int j=N-i;j>=1;j--){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

//sixteen
void patternSixteen(int N){
    char a='A';
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<a<<" ";
            
        }
        a++;
        cout<<endl;
    }
}

int main(){
    
    patternOne();
    cout<<endl;
    patternTwo();
    cout<<endl;
    patternThree();
    cout<<endl;
    patternFour();
    cout<<endl;
    patternFive();
    cout<<endl;
    patternSix();
    cout<<endl;
    patternSeven();
    cout<<endl;
    patternEight();
    cout<<endl;
    patternNine();
    cout<<endl;
    patternTen();
    cout<<endl;
    patternEleven();
    cout<<endl;
    patternTwelve(6);
    cout<<endl;
    patternThirteen(6);
    cout<<endl;
    patternFourteen(6);
    cout<<endl;
    patternFifteen(6);
    cout<<endl;
    patternSixteen(6);


    
}