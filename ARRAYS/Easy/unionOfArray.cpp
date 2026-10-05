#include<bits/stdc++.h>
using namespace std;
class Bruteforce {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1  = nums1.size();
        int n2 = nums2.size();
        set<int> s;
        for(int i = 0; i<n1; i++){
            s.insert(nums1[i]);
        }
        for(int i = 0; i<n2; i++){
            s.insert(nums2[i]);
        }
        vector<int> result;
        for(auto it:s){
            result.push_back(it);
        }
        return result;
    }
};
int main(){
    vector<int> a = {1,2,3,2,2,2,5};
    vector<int> b = {1,1,1,1,6,7,8};
    Bruteforce object;
    vector<int> res ;
    res =object.unionArray(a,b);
    cout<<"the union of the array is : "<<endl;
    for(auto it:res){
        cout<<it<<" ";

    }
    cout<<endl;
    return 0;
}