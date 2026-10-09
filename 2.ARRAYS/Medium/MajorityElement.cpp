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

class Better{
    public:
    int MajorityEle(vector<int> & v){
        int n = v.size();
        map<int,int> mpp;
        for(int i = 0; i<n; i++){           //loop takes O(N) TC and map insertion takes O(log n) TC so it total TC: O(N LOG N)
            mpp[v[i]]++;
        }
        for(auto it: mpp){          //map uses iterator to iterate through it's element which takes O(N) TC and SC: O(n)--> when all the elements are unique
            if(it.second>(n/2)){
                return it.first;
            }
        }
        return -1;  //when no element crosses the mark of more than n/2 times
    }
};

int main(){
    vector<int> a = {3,2,5,3,7,3,3,6,1,3,10,3,3};
    map<int,int> mpp;
    Better object;
    int res =object.MajorityEle(a);
    cout<<"Majority element repeated more than n/2 times is : "<<res<<endl;
    return 0;

}
