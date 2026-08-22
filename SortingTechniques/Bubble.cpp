#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n){
    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"\nAfter Sorting\n";
    for(int i = 0 ; i < n ; i++){
        cout<<a[i];
    }
}
int main(){
    int b[5];
    int n = 5;
    cout<<"\nEnter the array";
    for(int i = 0; i < n; i++){
        cin>>b[i];

    }
    cout<<"Before sorting :";
    for( int i = 0; i <n ; i++){
        cout<<b[i];
    }
    bubble(b,n);

    return 0;
}