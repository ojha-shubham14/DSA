#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n){
    for(int i =0;i<n-1;i++){
        int didswap = 0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                didswap =1;
            }
            if(didswap == 0){
                break;
            }
            cout<<"runs"<<"\n";
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