#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maximum = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    
    int hash[maximum+1] ={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] ++;
    }
    int high = hash[0];
    int maxFrequencyElement =0;
    int k;
    for(k=0; k<=maximum; k++){
        if(hash[k]>high){
            high = hash[k];
            maxFrequencyElement=k;
        }
        
    }
    cout<<"\nmost occured element :"<<maxFrequencyElement;

    //int low = hash[0]; wrong as 0 sabse chhoti he rahegi al time hence initialize it with maximum i.e, INT_MAX
    int low = INT_MAX;
    int j;
    int leastFrequencyElement =0;
    for(j =0; j<=maximum; j++){
        if(hash[j]>0 && hash[j]<low){
            low = hash[j];
            leastFrequencyElement=j;
        }
        
    }
    cout<<"\nLeast occured element :"<<leastFrequencyElement;
    return 0;
}