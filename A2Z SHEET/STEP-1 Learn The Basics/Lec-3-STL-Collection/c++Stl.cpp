#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//learn about pairs
void pairs(){
     //{1,3}
     pair<int,int>p={1,3};
     cout<<"a method to print pairs =";
     cout<<p.first<<" , "<<p.second<<endl;

     //nested pair 
     pair<int,pair<int,int>>pt={1,{1,3}};
     cout<<"a method to print nested pairs =";
     cout<<pt.first<<" , "<<pt.second.second<<endl;

     //pairs array
     pair<int,int>arr[]={{1,2},{2,5},{5,1}};
     cout<<"a method to print nested pairs =";
     cout<<arr[1].first<<" , "<<arr[2].second<<" ,"<<endl;

}

// we learn about vectors in details okk

void Vectors(){
    //array size can't change but vector have power to change 
    //vector is dynamic
    //vector is a container as similar as array

    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.emplace_back(4);
    v.push_back(5);
    v.emplace_back(6);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    cout<<endl;

    vector<int>v1(5);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<",";
    }
    cout<<endl;
    

    //
    vector<int>v2(5,10);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<",";
    }
    cout<<endl;
    
    //
    vector<int>v3(v2);
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<",";
    }
    cout<<endl;

    //iterators 
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*it<<" ";

    it=it+2;
    cout<<*it<<" ";

    cout<<endl;
    
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    //insert function in vector 

    vector<int>v4(2,100);
    for(auto it:v4){
        cout<<it<<" ";
    }
    cout<<endl;

    v4.insert(v4.begin(),300);
    for(auto it:v4){
        cout<<it<<" ";
    }
    cout<<endl;

    v4.insert(v4.begin()+1,2,10);
    for(auto it:v4){
        cout<<it<<" ";
    }
    cout<<endl;

    //swap in vector 
    
}

void lists(){
   cout<<"list"<<endl;
   

}

void Stacks(){

    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.top()<<endl;;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    
}

void Queues(){
    cout<<"queue"<<endl;
    queue<int>st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(1);

    cout<<st.front()<<endl;;
    st.pop();
    cout<<st.front()<<endl;
    cout<<st.size()<<endl;

    
}

void Sets(){

    //everthing store is sorted and unique 

    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.emplace(3);
    st.emplace(4);

    
}


int main(){
     pairs();
     
     //vectors 
     Vectors();

     //List
     lists();

     //stack
     Stacks();

     //Queue
     
     Queues();

     //priority queue (store the element having higher proiority at top)

     //min heap 
     //store minimum element at top 

     //sets
     Sets()
}