#include<bits/stdc++.h>
using namespace std;

class Better{                   //TC: O(N)*O(K log K)--> for traversing all the string present & sorting ke liye the maximum lenght of the string be K and for sorting K log K
    //                            SC: O(K*N)
    public:
    vector<vector<string>> groupAnagram(vector<string>&strs){
        int n = strs.size();
        unordered_map <string,vector<string>> mp;           //to store the each word in sorted form of the string and it will be in the string part and vector<string> will be containing all the permutation and combination of the the sorted string which is present in the input vector.
        vector<vector<string>> result;                      //here it is the return type hence we will store the vector<string> part from the unordered_map here in the result;

        for(int i = 0; i<n ; i++){
            string temp = strs[i];                          //we will store each string in temp (one at a time)
            sort(begin(temp),temp.end());                   //we will sort the temp string.
            mp[temp].push_back(strs[i]);                    //we will store the original strs[i] as value but temp (which was sorted) will be in the Key part of it.

        }

        for(auto it: mp){
            result.push_back(it.second);                    //we will push the it.second part that is the Values (vector<string>) part of the KEYS of the unordered_map to the result vector.     
        }

        return result;
    }
};