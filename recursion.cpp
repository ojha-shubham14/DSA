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
int main(){
    cout<<"enter the number of times you want to print your name :";
    int m;
    cin>>m;
    repeatname(m);
}