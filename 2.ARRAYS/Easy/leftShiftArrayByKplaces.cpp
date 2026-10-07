#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE METHOD ------> TC:O(K)+O(N-K)+O(K) = O(N+K) & SC: O(N) --->[WHICH IS THE TEMP ARRAY WE HAVE USED]
class sol{
    public:
        void shiftArray(vector <int> & v,int n , int k){
            k = k%n;
            int temp[k];        //temp array 
            for(int i =0;i<k;i++){
                temp[i]=v[i];
            }

            //shifting the elements by k places
            for(int i = k; i<n; i++){
                v[i-k]=v[i];
            }

            //place back temp array to the main array
            for(int i = n-k; i<n; i++){
                v[i]=temp[i-(n-k)]; //this will eventually make temp[0] to trace them.
            }
            /*
                        (or)
            int j = 0;
            for(int i = n-k; i<n; i++){
                v[i] =temp[j];
                j++;
            }
            */
           cout<<"array after shifting k places : "<<endl;
           for(auto a : v){
                cout<<a<<" ";
           }
           cout<<endl;
        }

};

//OPTIMAL SOLUTION ------> TC:O(N)+O(N-K)+O(K) = O(N+N) = O(2N) & SC: O(1) --->[Linear beacause no other array is used, so we have done a time and space tradeoff to reduce the spaace complexity]
class optimal{
    public:
        void LeftshiftArray(vector<int> & arr,int n ,int k ){
            //our logic is to reverse the whole array first i.e, {1,2,3,4,5,6,7} to {7,6,5,4,3,2,1}
            for(int start =0,end=n-1;start<end;start++,end--){
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
            }
            // now the array is: {7,6,5,4,3,2,1} and we have to reverse the elements except "K elements" i.e, {4,5,6,7,3,2,1}
            for(int start = 0,end = n-k-1; start<end; start++,end-- ){
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end]= temp;
            }
            //now the array is : {4,5,6,7,3,2,1} and we have reverse only "K elements" i.e, start = n-k and end = n-1 then it will become {4,5,6,7,1,2,3} i.e, the desired result
            for(int start = n-k,end = n-1 ; start<end; start++,end-- ){
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end]= temp;
            }
            cout<<"array now :"<<endl;
            for(auto a : arr){
                cout<<a<<" ";
            }
            cout<<endl;

        }
};

int main(){
    vector<int > v = {1,2,3,4,5,6,7,8};
    vector<int > arr = {1,2,3,4,5,6,7,8};
    int n = v.size();
    int k ;
    cout<<"enter how many places you want to shift the array by : ";
    cin>>k;

    cout<<"array before shifting k places : "<<endl;
    for(auto a : v){
        cout<<a<<" ";
    }
    cout<<endl;
        
    sol obj;
    obj.shiftArray(v,n,k);
    optimal object;
    object.LeftshiftArray(arr,n,k);
    return 0;

}