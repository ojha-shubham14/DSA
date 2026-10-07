#include<bits/stdc++.h>
using namespace std;
int main(){
    //declaration

    unordered_map<int,string> um;
    um[1]={"apple"}; 
    um={{2,"mango"},{3,"orange"},{4,"pineapple"},{5,"strawberry"}};
    for(auto & [key,value]:um){
        cout<<"{"<<key<<","<<value<<"} ";

    }
    cout<<endl;

    //rest all other are same as map,multimap 
    return 0;
}