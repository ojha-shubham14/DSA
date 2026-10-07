#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int findConsecutiveOnes(vector <int> & arr){
            int count = 0;              //stores the number of ones which are consecutive.
            int maxi = 0;               //stores the maximum occurence of ones
            for(auto a : arr){
                if(a==1){
                    count++;            //if number of ones are consecutive it adds +1 to it.
                    if(count>maxi){     //maxi stores the maximum occurences of ones even if consecutiveness is broken
                        maxi = count;
                    }
                }
                else{                   //if the consecutiveness of ones are broken, then the counter resets to zero
                                        //if the counter is less after counting 1's in the array from that array position where the consecutiveness was broken then the maxi would not be changed, if count increases than maxi then it would be changed.\

                    count = 0;
                }
            }
            return maxi;
        }
};

int main(){
    Solution obj;
    vector<int> v = {1,3,0,0,1,1,1,0,0,1,1,1,1,0,0,0,1,1};
    int result = obj.findConsecutiveOnes(v);
    cout<<"maximum consecutive ones in the array are: "<<result<<endl;
    return 0;
}