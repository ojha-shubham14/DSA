#include<bits/stdc++.h>
using namespace std;
void insertion(int a[],int n){
    for(int i =0;i<=n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp = a[j-1];
            a[j-1]=a[j];
            a[j]= temp;
            j--;
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

    insertion(b,n);

    cout<<"\nAfter Sorting\n";
    for(int i = 0 ; i < n ; i++){
        cout<<b[i];
    }

    return 0;
}