#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int singleNumber(vector<int> &v){
            int result=0;
            for(auto a : v){
                
                result^=a;
            }
            return result;
        }
};
int main(){
    vector<int> v = {2,2,1};
    Solution obj;
    int results = obj.singleNumber(v);
    cout<<"single Number in the array is : "<<results<<endl;
    
}