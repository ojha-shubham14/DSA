#include<bits/stdc++.h>
using namespace std;
bool sortedArray(vector<int> &v,int n){
    for(int i =1;i<n;i++){
        //if(v[i]>v[i-1]);          //doing like this,compiler feels like , if() {do nothing} eles(return false).

        if(v[i]<v[i-1]){
            return false;
        }
    }
    return true;
}


int main(){
 vector<int> v = {1,3,4,5,6,7,8};
 int n = v.size();
 cout<<"the given array is sorted --> 1 and not sorted if --> 0: "<<sortedArray(v,n)<<endl;
 return 0;
}