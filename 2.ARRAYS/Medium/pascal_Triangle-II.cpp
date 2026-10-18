#include<bits/stdc++.h>
using namespace std;
class bruteforce{
    public: 
    long long ncr(int n , int r){
        if(r<0 || r>n){
            return 0;
        }
        r = min(r,n-r);

        long long res = 1;
        for(int i = 0; i<r;i++){
            res = res*(n-i);
            res = res/(i+1);
        }
        return res;
    }

    vector<int> getRow(int rowIndex){
        vector<int> row;
        for(int i = 0 ; i<=rowIndex; i++){    //will go till rowIndex because Row number signifies how many Element present in each row. and it uses 0 based index that will print 2nd row if you give 1 as input and print 1st row if you give 0 as input
            row.push_back(ncr(rowIndex,i)); //ncr(rowIndex,i) will find it out each element at each iteration, and Push_Back will add this into the row vector.
        }
        return row;

    }
};

int main(){
    bruteforce obj;
    vector<int> row;
    row = obj.getRow(5);
    for(auto a : row){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}