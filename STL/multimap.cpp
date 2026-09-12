#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,string> mm ;
    mm ={{1,"b"},{2,"a"},{1,"a"}};

    for(auto &[key,value]:mm){              //now in multimap it can store duplicate key and that too in sorted order
        cout<<"{"<<key<<":"<<value<<"} ";
    }
    cout <<endl;


    //insertion in multimap

    mm.insert({2,"c"});
    mm.emplace(3,"a");

    mm.insert(make_pair(4,"banana"));
    mm.emplace(make_pair(5,"z"));

    for(auto & [key,value]:mm){
        cout<<"{"<<key<<":"<<value<<"} ";
    }
    cout<<endl;


    //Searching 

    auto it = mm.find(1);
    cout<<(*it).first<<":"<<(*it).second<<endl;         //cout<<(*it) doen't work because it is as a pair datatype
                                                        //and cout doesn't know how to print it as a whole.
                                                        //'cout<<' only works for int,float,char,string..etc
    
    cout<<mm.count(1);                                  //prints the count of the keys.
    
    //cout<<mm.contains(1);                             //prints in bool , true or false




    //deletion

    auto it1=mm.begin();
    auto it2= next(mm.begin(),2);
    mm.erase(it1,it2);               // removes a range of elements [start,end)
    mm.erase(1);                     //removes all element with 1

    auto itr = mm.begin();
    mm.erase(itr);                    //removes the particular address element
    mm.clear();
    cout<<endl<<"remaining element in the multimap are :";
    for(auto &[a,b]:mm){
        cout<<"{"<<a<<":"<<b<<"} ";
    }
    cout<<endl;

    


    /*
    other important functions of mm which works same as map and sets :
    1.size()
    2.empty()
    3.swap()
    4.begin()
    5.end()
    6.clear()
    */


    return 0;
    
}