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
        int temp = a[start]; //can use swap(start,end) also but doing.
        a[start] = a[end];
        a[end]=temp;
        reverseArray(a,start+1,end-1);
        
    }
}
void CheckPal(string word,int start,int end){
    if(start>=end){
        cout<<"It's a palindome";
        return;
    }
    if(word[start]!=word[end]){
        cout<<"not a palindrome";
        return;
    }
        CheckPal(word,start+1,end-1);
    /*int main(){
    string shabd;
    int a,b;
    cout<<"enter any word to check for palindrome : ";
    cin>>shabd;
    CheckPal(shabd,0,shabd.length()-1);
    return 0;
}*/
}
int fib(int n){
    if(n<=1){
        return n;
    }
    int Last = fib(n-1);
    int SLast = fib(n-2);

    return Last+SLast;

    /*int main(){
    int a;
    cout<<"enter any number for the fibonacci input : ";
    cin>>a;
    cout<<fib(a);
    return 0;
}*/
    

}
int main(){
    int a;
    cout<<"enter any number for the fibonacci input : ";
    cin>>a;
    cout<<fib(a);
    return 0;
}