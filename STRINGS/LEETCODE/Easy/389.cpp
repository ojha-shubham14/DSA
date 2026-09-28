#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        for(auto c : s){
            result ^= c;
        }
        for(auto c : t){
            result ^= c;
        }
        return result;

    }
};

int main(){
    string s = "shubham"; string  t = "shubhamO";
    Solution object;
    char result = object.findTheDifference(s,t);
    cout<<"The difference is : "<<result;
    return 0;
}