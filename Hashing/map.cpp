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
    map<int,int> mpp; //mpp is the variable name for map data structure
    for(int i=0; i<size; i++){
        mpp[arr[i]] ++;
    }
    /*how is map is better than hash ?
    if the would be {100,1} and the maximum element in the array is 100
    thus in hashing it would store 101 spaces of array i,e only for 3 elements
    where as in map we only store the distinct numbers along with its occurences
    therefore it is slightly better than hashing. 
    */


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