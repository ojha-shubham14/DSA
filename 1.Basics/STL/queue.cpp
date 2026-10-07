#include<bits/stdc++.h>
using namespace std;
int main(){
    //defining queue
    queue<int> q;
    q.push(5);          //5
    q.push(3);          //5 3
    q.emplace(1);       //5 3 1

    //to check which all the elements are present in the queue then you need to make a temporary queue and use that.
    queue<int> temp = q;
    cout<<endl<<"the element present in the queue 'q' is :"<<endl;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }

    cout<<endl<<"the front element is : "<<q.front()<<endl;

    //Pop removes the element which is in the front.
    q.pop();
    queue<int> temp2 = q;

    cout<<"elements in temp :"<<endl;
    while(!temp2.empty()){
        cout<<temp2.front()<<" ";
        temp2.pop();
    }
    cout<<endl;

    //swapping queue is same like stacks
    queue<int> q2;
    q2.swap(q);
    cout<<"swapping successfully done"<<endl;

    //checking the size of the queue

    cout<<"the size of queue q2 is :";
    cout<<q2.size();

    return 0;

}