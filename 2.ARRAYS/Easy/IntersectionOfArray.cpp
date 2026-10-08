#include<bits/stdc++.h>
using namespace std;
class Optimal{
    public: 
        vector<int> intersectionArray(vector<int> & a , vector<int> &b){
            int n1 = a.size();
            int n2 = b.size();
            vector<int> intersection;
            int i = 0;
            int j = 0;
            while(i<n1 && j<n2 ){
                if(a[i]<b[j]){
                    i++;
                }
                else if (a[i]>b[j]){
                    j++;
                }
                else{
                    if(intersection.size()==0 || intersection.back()!=a[i]){
                        intersection.push_back(a[i]);
                    }
                    i++;
                    j++;
                }
            }
            while(i<n1){
                if(intersection.size()==0|| intersection.back()!=a[i]){
                    intersection.push_back(a[i]);
                }
                i++;
            }
            while(j<n2){
                if(intersection.size()==0|| intersection.back()!=b[j]){
                    intersection.push_back(b[j]);
                }
                j++;
            }
            return intersection;
        }
};

int main(){
    vector<int> c = {1,2,3,4,4,6,7,9,11,11,14};
    vector<int> d = {1,1,1,1,6,7,10,11,14};
    Optimal obj;
    vector<int> final;
    cout<<"the Intersection of the array is : "<<endl;
    
    final = obj.intersectionArray(c,d);
    for(auto abc:final){
        cout<<abc<<" ";
    }
    cout<<endl;
    
    return 0;
}