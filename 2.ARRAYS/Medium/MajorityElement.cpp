#include<bits/stdc++.h>
using namespace std;
class BruteForce{
    public:
    int MajortiyElement(vector<int> & nums){
        int n = nums.size();
        int i = 0;
        for(i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j<n;j++){
                if(nums[i]==nums[j]){
                    count ++;
                }
                if(count > (n/2)){
                    break;
                }
            }
            return nums[i];
        }
        
    }
};

int main(){
    vector<int> a = {3,2,5,3,7,3,3,6,1,3,10,3,3};
    BruteForce object;
    int res =object.MajortiyElement(a);
    cout<<"Majority element repeated is : "<<res<<endl;
    return 0;

}
