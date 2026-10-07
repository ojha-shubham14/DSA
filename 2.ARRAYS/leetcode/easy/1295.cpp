#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findNumbers(vector<int> &v){
        int count = 0;
        for(auto a : v){
            int digit=0;
            if(a==0){           //when the element it self is 0 i.e, it is single digit element
                digit=1;
            }
            while(a!=0){
                digit++;
                a/=10;
            }
            if(digit%2==0){
                count++;
            }
        }
        return count;
    }
};

int main(){
    vector<int> v = {12,6,9,3445,432,553};
    Solution obj;
    int result = obj.findNumbers(v);
    cout<<"number of elements of even numbers are : "<<result<<endl;
    return 0;
}