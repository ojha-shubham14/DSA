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
class Optimal{
    public:
        vector<int> Union(vector<int>& a , vector<int>& b){
            int n1 = a.size();
            int n2 = b.size();
            int i =0;   //pointer for array a
            int j = 0; //pointer for array b
            vector<int> UnionArr;
            while(i<n1 && j<n2){
                if(a[i]<=b[j]){
                    if(UnionArr.size()==0 || UnionArr.back()!= a[i]){
                        UnionArr.push_back(a[i]);
                    }
                    i++;
                }
                
                else{
                    if(UnionArr.size()==0 || UnionArr.back()!= b[j]){
                        UnionArr.push_back(b[j]);
                    }
                    j++;
                }
                
                
            }
            while(i<n1){        //when j iteration is completed and i iteration is still left 
                if(UnionArr.size()==0||UnionArr.back()!= a[i]){
                UnionArr.push_back(a[i]);
                }
                i++;
            }
            while(j<n2){        //when j iteration is completed and i iteration is still left 
                if(UnionArr.size()==0 || UnionArr.back()!= b[j]){
                UnionArr.push_back(b[j]);
                }
                j++;
            }
            return UnionArr;
            
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
    cout<<endl;


    vector<int> c = {1,2,3,2,2,2,5};
    vector<int> d = {1,1,1,1,6,7,10,11,14};
    Optimal obj;
    vector<int> final;
    cout<<"the union of the array is : "<<endl;
    
    final = obj.Union(c,d);
    for(auto abc:final){
        cout<<abc<<" ";
    }
    cout<<endl;
    
    return 0;
}