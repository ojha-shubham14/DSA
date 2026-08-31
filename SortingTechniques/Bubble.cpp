#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n){
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
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

    cout<<"\nAfter Sorting\n";
    for(int i = 0 ; i < n ; i++){
        cout<<b[i];
    }

    return 0;
}