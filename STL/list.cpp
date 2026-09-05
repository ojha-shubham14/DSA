#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(8);            //pushes back the element
    ls.emplace_back(77);        //pushes back the element by making the element inside the list.
    for(auto a:ls){
    cout<<a<<" ";
    }

    cout<<endl<<"before list: "<<endl;
    for(auto a:ls){
    cout<<a<<" ";
    }
    ls.push_front(1);           //pushes the element in 0th index
    ls.emplace_front(2);        //pushes the element at 0th index but by making the element in the list only.
    cout<<endl<<"after list: "<<endl;
    for(auto a:ls){
    cout<<a<<" ";
    }
    
    //swapping list 
    list<int> abc;
    abc.push_back(7);
    abc.push_back(8);
    abc.push_back(9);
    cout<<endl<<"List abc: "<<endl;
    for(auto a:abc){
    cout<<a<<" ";
    }
    ls.swap(abc);
    cout<<endl<<"List abc: "<<endl;
    for(auto a:abc){
    cout<<a<<" ";
    }

    //erasing list element


    cout<<endl<<"deleting 1st element from ls which is 7"<<endl;
    list<int> ::iterator it = ls.begin();
    ls.erase(++it);       //{7 8 9}
    for(auto a:ls){
    cout<<a<<" ";
    }

    //deleting multiple elements in a list
    cout<<endl<<"deleting multiple elements :"<<endl;
    abc.erase(abc.begin(),next(abc.begin(),2));
    for(auto a:abc){
        cout<<a<<" ";
    }

    //clear the entire list 
    cout<<endl<<"before clearing list abc ;"<<endl;
    for(auto a:abc){
        cout<<a<<" ";
    }
    abc.clear();
    cout<<endl<<"abc:"<<endl;
    for(auto a:abc){
        cout<<a<<" ";
    }

    ls.clear();
    cout<<endl<<"ls :"<<endl;
    for(auto a:abc){
        cout<<a<<" ";
    }

    return 0;
}