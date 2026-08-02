#include<bits/stdc++.h>
using namespace std;
void selection(int a[],int n){
    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int temp = a[min];
        a[min]= a[i];
        a[i] =temp;  
    }
    cout<<"\nThe Sorted order is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    int n;
    cout<<"\nEnter the size of the array";
    cin>>n;
    int array[n];
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"\nThe array is:\n";
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
    selection(array,n);
    return 0;
}