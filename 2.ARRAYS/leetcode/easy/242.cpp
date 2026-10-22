#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    bool isanagram(string s , string t){            // TC : nlogk SC: k
        if(s.size()!= t.size()){        //if size of both string are not equal then they are not anagram
            return false;
        }

        map<char,int> freq;         //creating a map to store the element


        for(char ch : s){               //storing frequency of each character in map using s string
            freq[ch]++;
        }

        for(char ch : t){           //subtracting sotred character frequency using t string in map
            freq[ch]--;
        }
        for(auto it : freq){        //if map ka each values is not == 0 for each char then it is not a valid anagram else it is a valid anagram.
            if(it.second!=0){
                return false;
            }
        }
        return true;    
    }
};

class optimal{      //TC: O(n) SC:O(n) and Auxillary SC: O(1)
    public:
    bool isanagram(string s , string t){
        vector<int> freq(26,0);
        if(s.size()!=t.size()){
            return false;
        }

        for(int i = 0 ; i<s.size(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for(int i = 0 ; i<freq.size(); i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};