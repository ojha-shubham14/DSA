#include<bits/stdc++.h>
using namespace std;
int main(){
     // creation of vector
    vector <int> v; //creates an empty container

    v.push_back(1);             //creates a object 1 outside then moves into container v 

    cout<<"this is push back : " <<endl; 
    for(int x:v){
        cout<<x; //this prints 1
        
    }
    v.emplace_back(3);          //directly makes the object inside the container so faster than push back.

    cout<<endl<<"this is emplace_back : "<<endl; 
    for(int x:v){
        cout<<x; //this prints 1 and 3
        
    }
     cout <<endl;

    //make a vector container of Pair data type


    vector <pair<int,int>> vec;

    vec.push_back({1,2});       // for push back you need to make an array of 2 values as a argument.
    vec.emplace_back(3,4);      //for emplace_back we can directly give the inputs and it assumes that its a pair.
    
    cout<<"Printing vector pairs : "<<endl;
    for(auto x:vec){
        cout<<x.first<<" "<< x.second<<endl;
    }

    // creating a blank vector 
    vector <int> v1(5);
    for(int x:v1){
        cout<<x;            //This will print 5 zeros or garbage value.
    }
    v1.push_back(7);
    cout<<endl;
    for(int x:v1){
        cout<<x;            //This will print 5 zeros and followed by 7.
    }
    
    //we can copy one vector container to another like copying one container and pasting it on the other container.
    vector<int> v2(v1);
    cout<<endl;
    for(int y:v2){
        cout<<y;            //This prints the exact same elements present in the vector container v1.
    }
    
    return 0;
}