#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    long long ncr(int n, int r){
        if( r<0 || r>n){
            return 0;
        }

        r = min(r,n-r);

        long long res = 1;

        for(int i = 0; i<r; i++){
            res = res*(n-i);
            res = res/(i+1);
        }

        return res;
    }
    vector<int> getRow(int r) {

       vector<int> row;

       for(int i = 0 ; i<=r; i++){
        row.push_back(ncr(r,i));
       }
       
       return row;
    }
};

class optimal{
    public: 
        vector<int> getRow(int rowIndex) {
            vector<int> row;
            long long current = 1;
            row.push_back(1);

            for(int i = 1 ; i<=rowIndex; i++){
            current = current * (rowIndex - i+1 )/ i;
            row.push_back(current);
        }
        return row;

    }
};