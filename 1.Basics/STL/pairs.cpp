#include<bits/stdc++.h> // using <utility> for pairs and <iostream> for inputs and outputs
using namespace std;
int main(){
    pair<int,int> p ={6,7};
    cout<<p.first<<" "<<p.second<<endl;

    // we can store more than 2 values in the pair with the following method
    pair<int,pair<int,int>> p1 = {4,{5,6}};
    cout<<p1.first<<" "<<p1.second.first<<" "<< p1.second.second<<endl;

    // we can initialize arrays also with the help of pair as dataype

    pair<int,int> arr[] ={{1,2},{3,4},{5,6}};
    cout<< arr[0].first<<" "<<arr[0].second; // prints 1 and 2 

}