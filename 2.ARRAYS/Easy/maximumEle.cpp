#include<bits/stdc++.h>
using namespace std;
void maxElement(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++){       //can't do sizeof(arr); it's a classic trap.
                                //sizeof(arr), when we pass array into the fucntion then 
                                //behaves like a pointer and sizeof() just tells how big 
                                //the pointer is , in 64bit system , every pointer is of 8 bits
                                //no matter how many element does it contain
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum element of the array is : "<<max<<endl;
}
int main(){
    vector<int> v ={2,5,1,3,0};
    auto it1 = v.begin();
    auto it2 = v.end();
    int maxi = *max_element(it1,it2);
    cout<<"maximum element of the vector v is:"<<maxi<<endl<<endl;



    int n;
    cout<<"enter the number of element you want: "<<endl;
    cin>>n;
    int a[n];
    
    
    cout<<endl<<"enter the elements to the array:"<<endl;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

                                                            //copy(v.begin(),v.end(),a);
                                                            //we can do this too for getting the 
                                                            //same element as vector


    cout<<"the array is : "<<endl<<"{";                                                       
    for(int i =0; i<n;i++){
        cout<<a[i]<<",";
    }
    cout<<"}";
    cout<<endl;
    
    maxElement(a,n);
    return 0;
}