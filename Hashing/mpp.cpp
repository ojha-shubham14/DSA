#include<bits\stdc++.h>
using namespace std;
int main(){
    // take the input array
    int size;
    cout<<"\n Enter the size of the array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //pre compute
    map<int,int> mpp;
    for(int i=0; i<size; i++){
        mpp[arr[i]] ++;
    }


    //fetch
    int queries;
    cout<<"\n number of queries you will ask ? :";
    cin>>queries;
    while(queries--){
        int number;
        cout<<"\n enter the number you want to search for :";
        cin>>number;
        cout<<"Frequencies is :"<<mpp[number]<<endl;

    }
    return 0;

}