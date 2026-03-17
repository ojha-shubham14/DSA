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
int reverseNumber(int n){
    int reverse = 0 ;
    while(n > 0){
        int lastdigit =n % 10;
        reverse = (reverse * 10)+ lastdigit; // first time (0*10)+lastdigit and in the next iteration it will be (previous closing value * 0) + lastdigit , i have done like this because in the 2nd turn reverse variable should become in 2 digits right ?
        n = n / 10;
    }
    cout<< "The reverse of a given number is : "<<reverse;
    return reverse;
}
int main(){
    int n;
    cout<<"Enter the numbers : " ;
    cin>>n;
    reverseNumber(n);
    return 0;
}