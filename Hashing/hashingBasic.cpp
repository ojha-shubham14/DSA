#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"The size of the array you want :";
    cin>>n;
    int arr[n];
    cout<<"\n Enter the array elements :";
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }


    //Pre-computation i.e pehle se he compute karna before asking ki how many times a particular number exists

    // int hash[1000001]; we can give like this but the size will be too big and the places int the array we dont use wo waste ho jayenge and befaltu me we will be using the space
    // better first find the maximum value in the main array and initialize the hash array by hash[maximum_element_of_mai_array + 1]

    int maximum = arr[0];
    for(int i = 0; i<n; i++){
        if(maximum<arr[i]){
            maximum = arr[i];
        }
    }

    int hash[maximum+1] = {0}; //all places will be initialized to zero and the hash array size should be 1 greater than the main array, suppose if the array size is 10^8 then the hash array size should be atleast (10^8)+1.
    for(int i = 0; i<n ;  i++){
        hash[arr[i]]+= 1; //hash of main array ka index value jo hai wo hi hash array k index value me jakke +1 kar dega
    }

    //fetching part

    int q;
    cout<<"\nTell how many queries you will ask for :";
    cin>>q;
    while(q--){
        int number;
        cout<<"\n Enter the number whose frequency you are looking for: ";
        cin>> number;
        cout<<hash[number]; //goes to the place which the user is asking for and returns the vale which is present there
    }
    return 0;
}
