#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool ispalindrome(string s , int start , int end){
        while(start<end){
            if(s[start]!= s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int low = 0;
        int high = s.size()-1;
        while(low<high){
            if( s[low]!= s[high] ){
                return ispalindrome(s,low+1,high) || ispalindrome(s,low,high-1);
            }
            low++;
            high--;
        }
        return true;
    }
};

int main(){
    string s ="abca";
    Solution object;
    int i = 0, j = s.size()-1;
    object.ispalindrome(s,i,j);
    object.validPalindrome(s);
    return 0;
}