#include<bits/stdc++.h>
using namespace std;
void selection(int a[] , int n){
    
    for(int i=0;i<=n-2;i++){
        int min = i;
        for(int j=i; j<=n-1; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int temp = a[min];
        a[min]= a[i];
        a[i]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array :\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : \n";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"BEFORE SORTING :\n";
    for(int i=0; i<n; i++){
        cout<<a[i];
    }
    selection(a,n);
    
    cout<<"\n";

    cout<<"AFTER SORTING :\n";

    for(int i =0; i<n; i++){
        cout<<a[i];
    }
    return 0;
}
