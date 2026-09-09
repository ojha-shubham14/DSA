#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);    //1
    s.insert(3);    //1 3
    s.insert(5);    //1 3 5
    s.insert(2);    //1 2 3 5
    s.insert(3);    //1 2 3 5 it ignores the repeated 3 as it is already present in the set.
    cout<<endl<<"element present in the set are :"<<endl;

    for(auto x : s){
        cout<<x<<" ";
    }

    //additonal functions :
    auto it = s.find(3);        //Eqivalent to set<int> :: iterator it = s.find(3). 
    cout<<endl<<*(it);          //this returns the element if it is present 
    cout<<endl<<&(*it);         //this returns the address of the elment present 

    // what is element is not found at all ?
    it = s.find(6);
    cout<<endl<<*(it);          //it will return the undefined behaviour past last number as it is not present
                                //this 6 is not present so it will redirect to s.end() ie, the next address of the last element in the set.
    cout<<endl<<&(*it);         //this is the address of s.end().

    
    //removing of element from set 

    s.erase(3);                 // Time complexity : LOG N.
    
    it=s.find(2);
    s.erase(it);                //Time complexity : CONSTANT or 1.

    cout<<endl<<"remianing elements in the set : "<<endl;       //{1,5}
    for(auto v:s){
        cout<<v<<" ";
    }
    cout<<endl;



    //occurences of elements 

                        //set contains 's': {1,5}

    s.emplace(1);       //1 5
    s.insert(3);        //1 3 5
    s.insert(5);        //1 3 5
    s.insert(2);        //1 2 3 5
    s.insert(3);        //1 2 3 5
    s.emplace(9);       //1 2 3 5 9

    cout<<"the occurence of 5 is :"<<s.count(5);        //it will always show either 1 or 0


    //erase a range of elements 
    cout<<endl<<"Before deletion : "<<endl;
    for(auto a: s){
        cout<<a<<" ";
    }

    cout<<endl<<"erasing from index 1,2 and 3 : "<<endl;
    auto it1 = s.find(2);
    auto it2  = s.find(9);
    s.erase(it1,it2);           //it is (start,end], that is start is included and end is not.

    for(auto a: s){
        cout<<a<<" ";
    }

    //lower bound and upper bound concepts

    set<int> ss;
    ss.insert(9);
    ss.insert(8);
    ss.insert(7);
    ss.insert(6);
    ss.insert(5);
    ss.insert(4);
    ss.insert(3);
    ss.emplace(2);
    cout<<endl<<"set ss :"<<endl;
    for(auto a : ss){
        cout<<a<<" ";
    }
    cout<<endl;

    auto x = ss.lower_bound(3);                 //returns an iterator of the element = or > than element.
    cout<<endl<<"lower bound is : "<<*x<<" ";

    set<int>::iterator y = ss.upper_bound(7);   //returns an iterator of the element greater than it.
    cout<<endl<<"upper bound is : "<<*y<<" "<<endl;

    //using lower and upperbound to erase elements
    cout<<endl<<"erasing using LB and UB:";

    cout<<endl<<"the set ss before erasing elements :"<<endl;
    for(auto a : ss){
        cout<<a<<" ";
    }
    cout<<endl;

    ss.erase(ss.lower_bound(3),ss.upper_bound(4)); //erases the elements between 3 and 4 and both included 
                                                //both included because ss.upper_bound() returns next address of the given element and the limit is [start,end).

    cout<<"remaining elements : "<<endl;
    for(auto a : ss){
        cout<<a<<" ";
    }
    cout<<endl;
    
    auto a = ss.lower_bound(5);
    auto b = ss.upper_bound(8);
    cout<<endl<<"erasing : "<<*a<<" "<<*b<<endl;
    ss.erase(a,b);

    cout<<"remaining set ss :";
    for(auto a : ss){
        cout<<a<<" ";
    }
    cout<<endl;                         
    
    return 0;

}