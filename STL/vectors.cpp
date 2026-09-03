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

    cout<<endl<<"Blank vector container without initializing elements to it :"<<endl;

    vector <int> v1(5);
    for(int x:v1){
        cout<<x;            //This will print 5 zeros or garbage value.
    }
    v1.push_back(7);
    cout<<endl<<"printing vector v1 :"<<endl;

    for(int x:v1){
        cout<<x;            //This will print 5 zeros and followed by 7.
    }
    
    //we can copy one vector container to another like copying one container and pasting it on the other container.
    vector<int> v2(v1);
    cout<<endl<<"copied vector and now printing vector v2 :"<<endl;
    for(int y:v2){
        cout<<y;            //This prints the exact same elements present in the vector container v1.
    }

    cout<<endl<<"Vector Iterators"<<endl;
    cout<<endl;
    v.push_back(4);
    v.push_back(5); 
    v.push_back(6); 
    v.push_back(7); 
    v.push_back(8);  
    cout<<endl<<"Vector V : "<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl<<" using v.begin() and *(it)"<<endl;
    vector<int> ::iterator it = v.begin();          //it points to the memory address of the first element and doesn't points to the element and the element 1 can be seen in output only because of "*" which is used with *(it) and which is used to show the the actual element present in the memory address
    cout<<*(it);

    cout<<endl<<" using v.back() : "<<endl;
    cout<<v.back();


    cout<<endl<<"Using v.end() and *(it) and see what comes: "<<endl;
    it = v.end();

    cout<<*(it)<<endl;              // it prints 0 because the v.end() is used to point to the memory address which is after the last element in the vector container and generallay have garbage values stored or zero.
    
    it--;
    cout<<"now doing it-- and it will point to the preious memory address and upon doing *(it) it will show the element present there : "<<endl;
    cout<<*(it)<<endl;

    cout<<endl<<endl;
    return 0;
}