#include<bits/stdc++.h>
using namespace std;
int main(){
    //declaration 
    map<int,int>mpp;
    
    // other declaration
    map<int,pair<int,int>>mapp1;
    map<pair<int,int>,int>mapp2;

    //inputs in map<int,int>
    mpp[1]=10;              //means key:1 and value: 10 i.e, [{1,10}]
    
    mpp.insert({5,6});      //can also use emplace({a,b})
    mpp.insert({2,3});      //sorts in order according to keys so,
                            //[{2,3},{5,6}] 
    
    cout<<"elements present in mpp :";
    for(auto it:mpp){
        cout<<it.first<<" ->"<<it.second<<endl;
    }
    cout<<endl;

    //insertion in mapp1 and mapp2

    //mapp1 insertion 


    /*int n;
    cout<<endl<<"enter number of keys required : ";
    cin>>n;
    cout<<endl;
    for(int i =0;i<n;i++){
        int key,a,b;
        cout<<"enter key and pair (a,b): ";
        cin>>key>>a>>b;
        mapp1[key]={a,b};
    }
    cout<<endl<<"contents of map : "<<endl;
    for(auto [key,value]:mapp1){
        cout<<key<<"->{"<<value.first<<","<<value.second<<"}\n";
    }
    cout<<endl;*/



    //mapp2 insertion 

    
    /*int n;
    cout<<endl<<"enter number of keys required : ";
    cin>>n;
    cout<<endl;
    for(int i =0;i<n;i++){
        int value,a,b;
        cout<<"enter key(a,b) and value : ";
        cin>>key>>a>>b;
        mapp2[{a,b}]=key;
    }
    cout<<endl<<"contents of map : "<<endl;
    for(auto [key,value]:mapp1){
        cout<<"{<<key.first<<","key.second<<"}-><<value<<\n";
    }
    cout<<endl;*/



    //accessing single element 

    cout<<mpp[1];           //returns the vlaue of the key '1' present from mpp 

    cout<<mpp[300];         //as 300 doesn't exists so it inserts 300 into mpp with default int i.e, 0
                            //it actually inserts {300,0} and prints 0 as it's occurence.
    
    
    //Find key in map 

            //it takes iterator as data type 
    auto it = mpp.find(3);
    cout<<endl<<"key:3 and value :"<<(*it).second;      //prints the occurence of the key 3

    auto m = mpp.find(7000);
    if(m==mpp.end()){
        cout<<endl<<"key:7000 and value :"<<"not found in mpp  hence pointing to next address of the last element present in mpp"<<endl;
    }                   //if the elment is not present then it points to end().




    //upper and lower bound 

    auto lb = mpp.lower_bound(2);
    cout<<"lb:"<<(*lb).first<<"->"<<(*lb).second<<endl;

    auto ub = mpp.upper_bound(2);
    cout<<"ub:"<<(*ub).first<<"->"<<(*ub).second<<endl;
    return 0;


}