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
void reversenumber(int n){  //Forward method
    if(n==0){
        return;
    }
    else{
        int rev = n;
        cout<<rev<<" ";
        reversenumber(n-1);
    }
}
void reversenumber2(int i, int n){ //Back Tracking
    if(i>n) return ;
    reversenumber2(i+1,n);
    cout<<i<<" ";
}
int sum(int n){
    if(n<1) return 0;
    else{
        return n + sum(n-1);
    }
}
int main(){
    int m,a;
    cout<<"enter number: ";
    cin>>m;
    cout<<sum(m);
}