#include<bits/stdc++.h>
using namespace std; 
class solution{                 //we have to remove the duplicates element inplace i.e, we can't create any new space that is vecotr or set , we have to do it inplace that is space complexity should be o(1).
    public:
        void removeDuplicates(int nums[]){
            int i = 0;
            int n = sizeof(nums); 
            for(int j =1;j<n; j++){
                if(nums[i]!=nums[j]){
                    nums[i+1]=nums[j];
                    i++;
                }
            }
           cout<<"array is : "<<endl;
           for(int i = 0; i<n;i++){
            cout<<nums[i]<<" ";

           }
        }
};
int main(){
    int  v[] = {1,1,2,2,2,3,3};
    solution object;
    object.removeDuplicates(v);
    return 0;
}