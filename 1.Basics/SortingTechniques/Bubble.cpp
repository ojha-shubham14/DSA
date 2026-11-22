#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n){             //TC: O(N2)
    for(int i =0;i<n-1;i++){            //0 to n-1 because after each pass the largest element will be fixed to it's correct position 
        int didswap = 0;
        for(int j=0;j<n-i-1;j++){       //now, n-i-1 because after each iteration the last element will be sorted to the last so no need to check it again as waste of time
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                didswap =1;
            }
            if(didswap == 0){
                break;
            }
            cout<<"runs"<<"\n"<<didswap;
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