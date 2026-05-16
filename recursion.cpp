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
int fact(int n){
    if(n<=1) return 1; // return 1 means if n== 0 or 1 tab calculated answer =1 batao
    return n*fact(n-1);
}
void reverseArray(int a[],int start,int end){
    if(start>=end) return;
    else{
        int temp = a[start];
        a[start] = a[end];
        a[end]=temp;
        reverseArray(a,start+1,end-1);
        
    }
}
int main(){
    int size;
    cout<<"enter size: ";
    cin>>size;
    int array [size];
    cout<<"enter the array of the given size \n";
    for(int i =0;i<size;i++){
        cin>>array[i];
    }
    cout<<"reversed array is :";
    reverseArray(array,0,size-1);
    for(int j =0;j<size;j++){
        cout<<array[ j ];
    }
}