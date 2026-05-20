#include<iostream>
using namespace std;
//Brute force method to find the element in the array
int f(int a[],int b){
    int count =0;
    int n;
    cin>>n;
    for(int i = 0;i<n ; i++){
        if(a[i]==b){
            count +=1;
        }
    }
    return count;
}

int main(){
    int a[]={1,2,3,44,4,6,4};
    cout<<f(a,4);
    return 0;
    
}