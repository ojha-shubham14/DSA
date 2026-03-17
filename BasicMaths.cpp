#include<iostream>
using namespace std;
int countNumbers(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count = count + 1;
    }
    cout<< "The total numbers of digits in these are : " << count;
    return count;
}
int main(){
    int n;
    cout<<"Enter the numbers to count the digits present in it : " ;
    cin>>n;
    countNumbers(n);
    return 0;
}