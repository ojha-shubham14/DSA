#include<iostream>
#include<cmath>
using namespace std;
void repeatname(int n){
    if(n==0){
        return;
    }
    else{
        cout<<"Shubham ojha"<<endl;
        repeatname(n-1);
    }
    
}
void printnumber(int n,int start = 1){
    if(start>n){
        return;
    }
    else{
        cout<<start<<endl;
        printnumber(n,start+1);
    }
}
void reversenumber(int n){
    if(n==0){
        return;
    }
    else{
        int rev = n;
        cout<<rev<<" ";
        reversenumber(n-1);
    }
}
int main(){
    int m;
    cout<<"enter number to reverse from n - 1 :  ";
    cin>>m;
    reversenumber(m);
}