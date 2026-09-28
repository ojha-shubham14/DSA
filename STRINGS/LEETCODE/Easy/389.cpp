#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int result = 0;
        int i =0;
        while(s[i]&t[i]){
            result  = result^s[i]^t[i];
            i++; 
        }
        return result^t[i]; 
    }
};