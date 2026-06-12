#include<bits\stdc++.h>
using namespace std;
#define max 10
int SelectionSort(int a[max]){ //select the min among the array and then swap them
    for(int i=0; i<max; i++){
        int min = a[i];
        for(int j=i; j<max-1; j++){
            if(a[j]<min){
                //then swap their position
                int temp = a[j];
                a[j]=min;
                min = temp;
            }
        }
    }
    return a[max];
}
int a[max];
int main(){
    cout<<"enter the input array :\n"<<"\n";
    for(int i =1; i<=max; i++){
        cout<<"\n";
    }
    cout<<"the array is :\n";
    for(int i =1; i<=max; i++){
       cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<SelectionSort(a);
}