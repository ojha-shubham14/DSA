#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>  dq;
    dq.push_back(5);
    dq.push_front(2);
    dq.emplace_back(6);
    dq.emplace_front(2);
    cout<<endl<<"dq:"<<endl;
    for(auto a:dq){
        cout<<a<<" ";
    }

    cout<<endl<<"removing the back elements using different methods"<<endl;
    cout<<"dq before :"<<endl;
    for(auto a : dq){
        cout<<a<<" ";
    }
    dq.pop_back();
    dq.pop_front();
    cout<<endl<<"dq after deletion of elements :"<<endl;
    for(auto a : dq){
        cout<<a<<" ";
    }

    cout<<endl<<"clearing the whole deque using method clear()"<<endl;
    cout<<"before:"<<endl;
    for(auto a:dq){
        cout<<a<<" ";
    }
    dq.clear();
    cout<<endl<<"after:"<<endl;
    for(auto a:dq){
        cout<<a<<" ";
    }
    return 0;

    //rest other operations dq are similar to  vectors.
}