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

    //deletion of elements in the vectors

    vector<int> shubham;
    shubham.push_back(4);
    shubham.push_back(5); 
    shubham.push_back(6); 
    shubham.push_back(7); 
    shubham.push_back(8);

    cout<<"Vector shubham is : \n";
    for(auto a:shubham){
        cout<<a<<" ";
    }
    shubham.erase(shubham.begin());     //deletes the first element address of the the vector

    cout<<"\nAfter Deletion of 1st element: \n";

    for(auto a:shubham){
        cout<<a<<" ";
    }

    cout<<"\nAfter Deletion of last element: \n";
    shubham.erase(shubham.end()-1);             //deletes 8
    for(auto a:shubham){
        cout<<a<<" ";
    }

    cout<<"\nNew elements in the vector: \n";

    shubham.push_back(9);
    shubham.push_back(10); 
    shubham.push_back(11); 
    shubham.push_back(12); 
    shubham.push_back(13);

    for(auto a:shubham){
        cout<<a<<" ";
    }

    cout<<"\nAfter Deletion of 5th element : \n";

    vector<int>::iterator abc = shubham.begin();        //now the 1st address is stored in "abc" now.
    abc+=5;
    shubham.erase(abc);                      //deletes the 6th element from base address of it which is 11.

    for(auto a:shubham){
        cout<<a<<" ";
    }

    // deleting multiple elements i.e, a continuous range of elements
    cout<<endl<<"current vector of elements : \n";
    for(auto a:shubham){            //5 6 7 9 10 12 13
        cout<<a<<" ";
    }

    cout<<"\nAfter Deletion of 3rd,4th,5th indexed element : \n";       //that is element 9,10 and 12
    shubham.erase(shubham.begin()+3,shubham.begin()+6);         //the end address is not inclusive so give one address ahead of the "want to delete element". i.e, [start,end).
    for(auto a:shubham){            //5 6 7 13
        cout<<a<<" ";
    }


    //Insertion of elements at random place not back 
    cout<<endl;
    vector<int> vector(3,500);
    for(auto a:vector){            //500 500 500
        cout<<a<<" ";
    }
    cout<<endl;
    vector.insert(vector.begin(),100);          //.insert(placingAddress,placingElement)        //places 100 500 500 500
    vector.insert(vector.begin()+2,7);          //100 500 7 500 500
    for(auto a:vector){            //
        cout<<a<<" ";
    }

    //when you want to add multiple same elements at a position
    cout<<endl;
    cout<<endl<<"Vector Before :"<<endl; 
    for(auto a:vector){            //100 500 7 500 500
        cout<<a<<" ";
    }
    vector.insert(vector.begin()+1,3,9);            //places 3 different elements 9 9 9 on index 1
    cout<<endl<<"Vector after :"<<endl;
    for(auto a:vector){            //100 9 9 9 500 7 500 500
        cout<<a<<" ";
    }

    //Inserting a vector inside a vector 
    cout<<endl<<"Inserting shubham inside vector name 'VECTOR'"<<endl;      //Shubham: 5 6 7 13 Vector:100 9 9 9 500 7 500 500
    vector.insert(vector.begin(),shubham.begin(),shubham.end());
    cout<<endl;
    for(auto a:vector){            //5 6 7 13 100 9 9 9 500 7 500 500
        cout<<a<<" ";
    }

    cout<<endl<<"placing vector 'v' inside vector at Index 4 and from index 4 to 6 of vector 'v' "<<endl; //Vector v:1 3 4 5 6 7 8  Vector:5 6 7 13 100 9 9 9 500 7 500 500 that means 6 7 8 should come in Vector:5 6 7 6 7 8 13 100 9 9 9 500 7 500 500
    vector.insert(vector.begin()+3,v.begin()+4,v.begin()+7);
    for(auto a:vector){            //5 6 7 6 7 8 13 100 9 9 9 500 7 500 500
        cout<<a<<" ";
    }

    //other functions of vector 


    //1. size()
    cout<<endl<<"size of vector 'vector' is :"<<endl;
    cout<<vector.size();

    //2.popping back of element , just like pushing back the vector but this removes the last element.
    cout<<endl<<"popping the last element of vector which is 500"<<endl;
    vector.pop_back();
    for(auto a:vector){
        cout<<a<<" ";
    }

    //3. swapping 2 vector
    cout<<endl<<"vector 'Shubham' :";

    for(auto a:shubham){
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<endl<<"vector 'vector' :";

    for(auto a:vector){
        cout<<a<<" ";
    }
    cout<<endl;
    vector.swap(shubham);

    //4.checking a vector is empty or not 
    cout<<endl<<"is vector 'vector' empty ? 0---> means no(False) & 1---> means yes(True)"<<endl;
    cout<<vector.empty();

    //5.clearing vector
    cout<<endl<<"Before Clearing vectors:"<<endl;

    cout<<endl<<"vector 'Shubham' :";

    for(auto a:shubham){
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<endl<<"vector 'vector' :";

    for(auto a:vector){
        cout<<a<<" ";
    }
    cout<<endl;

    cout<<endl<<"after Clearing vectors:"<<endl;
    vector.clear();
    shubham.clear();
    cout<<endl<<"vector 'Shubham' :";

    for(auto a:shubham){
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<endl<<"vector 'vector' :";

    for(auto a:vector){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}