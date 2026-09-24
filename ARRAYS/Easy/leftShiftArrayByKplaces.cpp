#include<bits/stdc++.h>
using namespace std;
class sol{
    public:
        void shiftArray(vector <int> & v,int n , int k){
            k = k%n;
            int temp[k];        //temp array 
            for(int i =0;i<n;i++){
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

int main(){
    vector<int > v = {1,2,3,4,5,6,7,8};
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
    return 0;

}