#include<bits/stdc++.h>
using namespace std;
class sol{
    public:
        void rotate(vector<int>& nums, int k){
            int n = nums.size();
            k = k%n;
            int start = 0;
        int end = n-1;
        for(int start = 0, end = n-1; start<end; start++,end--){
            int temp = nums[start];
            nums[start]= nums[end];
            nums[end]= temp;
        }

         for(int start = 0, end = k-1; start<end; start++,end--){
            int temp = nums[start];
            nums[start]= nums[end];
            nums[end]= temp;
        }

        for(int start = k, end = n-1; start<end; start++,end--){
            int temp = nums[start];
            nums[start]= nums[end];
            nums[end]= temp;
        }
        
    
    }
};

int shubham(){
    vector<int> v = {1,2,3,4,5,6,7,8};
    int k ;
    cout<<"enter the number of elements you want to move from right end to left end as it is : "<<endl;
    cin>>k;
    sol object;
    object.rotate(v,k);
    for(auto a : v){
        cout<<a<<" ";
    }
    return 0;
}
int main(){
    shubham();
}