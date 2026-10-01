#include<bits/stdc++.h>
using namespace std;
class t9keyboard{
    public:
    void wordlen(const string& s){
        int n = s.size();
        string result = "";
        for(char ch : s){
            if( ch>='a' && ch <= 'c'){
                result+='2';
            }
            else if( ch>='d' && ch <= 'f'){
                result+='3';
            }
            else if( ch>='g' && ch <= 'i'){
                result+='4';
            }
            else if( ch>='j' && ch <= 'l'){
                result+='5';
            }
            else if( ch>='m' && ch <= 'o'){
                result+='6';
            }
            else if( ch>='p' && ch <= 's'){
                result+='7';
            }
            else if( ch>='t' && ch <= 'v'){
                result+='8';
            }
            else if( ch>='w' && ch <= 'z'){
                result+='9';
            }
            else{
                result = " ";
            }
        }
        cout<<"T9 code: "<<result;
    }
};
int main(){
    t9keyboard object;
    string a ;
    cout<<"enter the string :"<<endl;
    getline(cin, a);
    object.wordlen(a);
    return 0;
}