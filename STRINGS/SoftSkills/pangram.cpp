#include<bits/stdc++.h>
using namespace std;
class angram{
    public:
        void findAnagram (string e ,  string h){
            int eCounter = 0;
            int hCounter = 0;
            for(auto it : e){
                eCounter++;
            }
            for(auto it : e){
                hCounter++;
            }
            if(eCounter!= hCounter){
                cout<<"not an anagram due to variable text length";
            }
            for(int i = 0; i<e.size(); i++){
                char temp = e[i];
                e[i] = e[i+1];
                e[i+1] = temp;
            }

            for(int i = 0; i<h.size(); i++){
                char temp = h[i];
                h[i] = h[i+1];
                h[i+1] = temp;
            }

            if(e == h){
                cout<<" its anagram";
            }
            else{
                cout<<"not an anagram";
            }
        }
};

int main(){
    angram object;
    object.findAnagram( "heart" , "earth");
    return 0;
}