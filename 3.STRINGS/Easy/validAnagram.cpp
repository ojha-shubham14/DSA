#include<bits/stdc++.h>
using namespace std;

class bruteforce{
    public:
    bool isAnagram(string s , string t){
        if(s.size()!=t.size()){             //if sizes are not equal of the given strings then it is not anagram 
            return false;
        }

        //SORT the Array and check the frequency of each elements of both S and T strings (if the frequency and element doesn't matches then not Anagram)

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;            //will return true when these will have same elemnts and thei occurences
    }
};

class bruteforce2{
    public:
    bool isAnagram(string s, string t){
        if(s.size()!=t.size()){
            return false;
        }
        int n = s.size();
         vector<char> S;
         vector<char> T;

         for(int i = 0; i<n ; i++){
            S.push_back(s[i]);
            T.push_back(t[i]);
         }
         sort(S.begin(),S.end());
         sort(T.begin(), T.end());


         for(int i = 0; i<n ; i++){
            if(S[i]!=T[i]){
                return false;
            }
         }
         return S==T;               /*S==T is equivalent to 
                                    for(int i = 0; i<n ; i++){
                                        if(S[i]!=T[i]){
                                        return false;
                                        }
                                    }*/
    }
};


class better{
    public:
    bool isAnagram(string s, string t){
        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char,int> mp;

        int n = s.size();

        for(int i = 0 ; i<n ; i++){     //add s[i] to the map so that it can store the count of each characters with the character in the Unordered map.
            mp[s[i]]++;
        }

        for(int i =0; i<n; i++){        //remove t[i] from the unordered map which s[i] has added that is, if same elements are present then it will become 0 by subtracting each other
            mp[t[i]]--;
        }

        for(auto it: mp){
            if(it.second!=0){           //if all second iterators are zero then means both the string contained equal number of characters and is anagram
                return false;
            }
        }

        return true;                //else it will be true
    }
};


class optimal{
    public:
    bool isAnagram(string s , string t){
        
    }
};

int main(){
    string s = "HEART";
    string t = "EARTH";
    bruteforce2 obj;
    cout<<obj.isAnagram(s,t);

    return 0;
}