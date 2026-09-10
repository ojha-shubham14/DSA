#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"All the functions of multi set :\n";
    multiset<int> ms ;
    ms.insert(1);
    ms.insert(1);
    ms.emplace(1);              //can store multiples same element unlike sets 
    for(auto a : ms){
        cout<<a<<" ";
    }
    cout<<endl;

    ms.erase(1);                //deletes all the 1, not only single 1
    cout<<"after deletion :"<<endl;
    for(auto a : ms){
        cout<<a<<" ";
    }
    cout<<endl;

    ms.insert(1);
    ms.insert(1);
    ms.emplace(1);

    //if you want to delete specefic element which are repeated then take it's address and delete that element
    cout<<endl<<"elements in the multi set are :"<<endl;
    auto it = ms.begin();           //we can use begin() or end()-1 or find() any one to get the address;
    
    
    ms.erase(it);


    cout<<"remaing elements : ";
    for(auto a : ms){
        cout<<a<<" ";
    }
    cout<<endl;


    //range of similar elements ko delete karna 

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(7);
    ms.insert(9);
    ms.insert(22);

    cout<<" elements in multi set ms  : "<<endl;
    for(auto a : ms){
        cout<<a<<" ";
    }
    cout<<endl;

    //ms.erase(ms.find(1),ms.find(1)+4)            //this won't work : ms.erase(ms.find(1),ms.find(1)+4) or ms.erase(ms.begin(),ms.begin(1)) because multi set are multi directional so hence it will not identify '+' sign in it.
    ms.erase(ms.begin(),next(ms.begin(),6));       //so we can do in this way.

    cout<<"remaing elements : ";
    for(auto a : ms){
        cout<<a<<" ";
    }
    cout<<endl;
    


    //other functions like swap,empty,begin,end() and others are same use like vectors
    return 0;
}