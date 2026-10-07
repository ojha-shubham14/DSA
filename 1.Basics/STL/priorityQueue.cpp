#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"constructing priority queue which is max heap by default :"<<endl;
    //declaration of priority queue
    priority_queue<int> pq;         //by default places the maximum element on the top as we insert.
    
    //can also be written as : priority_queue<int,vector<int>,less<int>>


    //insertion and deletion 
    pq.push(2);     //2
    pq.push(6);     //6 2
    pq.push(19);    //19 6 2
    pq.emplace(17); //19 17 6 2
    cout<<" max heap top is: "<<pq.top()<<endl;
    
    pq.pop();
    cout<<"updated top of max heap is: "<<pq.top()<<endl;

    //similar to queues and other containers the use of size(),empty() and swap() is same

    cout<<endl<<"constructing the minimum heap priority queue :"<<endl;

    priority_queue<int,vector<int>,greater<int>> mh;
    mh.push(5);     //5
    mh.push(7);     //5 7
    mh.push(13);    //5 7 13
    mh.emplace(2);  //2 5 7 13

    cout<<endl<<"top of min heap is : "<<mh.top()<<endl;
    
    mh.pop();

    cout<<"updated top of min heap :"<<mh.top();

    return 0;
}