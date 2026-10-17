#include<bits/stdc++.h>
using namespace std;
class Bruteforce{       
    public:
        //Factorial funtion 
        long long fact(int x){
            long long res = 1;
            for(int i = 2;i<=x; i++){
                res*=i;
            }
            return res;
        }
        //nCr function by using factorial function which we have already made
        long long ncr(int n , int r){
            return fact(n)/ (fact(r)* fact(n-r));
        }
        //the function which prints the actual element present at the row and column
        long long PascalElement(int n , int r){
            return ncr(n-1,r-1);
        }
};

int main(){
    Bruteforce obj;
    int n;
    int r;
    cout<<"enter the row numbe:";
    cin>>n;
    cout<<endl<<"enter the col number:";
    cin>>r;
    cout<<endl<<"the element present in the pascal triangle at the particular row and column is : ";
    cout<<endl;
    
    cout<<obj.PascalElement(n,r);
    return 0;
}
