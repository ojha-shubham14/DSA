#include<bits/stdc++.h>
using namespace std;
int Linear(vector<int> v, int n){
    int num;
    cout<<"enter the number you are looking for and to return it's index"<<endl;
    cin>>num;
    for(int i =0;i<n;i++){
        if(v[i]==num){
            cout<<"found at index : "<<i<<endl;
            return 1;
        }
    }
    return -1;
}
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    int n=v.size();
    cout<<"array: "<<endl<<endl;
    for(auto a:v){
        cout<<a;
    }
    cout<<endl<<endl;
    Linear(v,n);
    return 0;
}