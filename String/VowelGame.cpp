#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool doesAliceWin(string s) {
        int n=s.size(),i,vowel=0;
        bool alicewin=false;
        for(i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||  s[i]=='u'||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vowel++;
            }
        }
        if(vowel>0){
             alicewin=true;
        }   
        else{
            alicewin=false;
        }
    return alicewin;
    }
};
int main(){
    Solution s;
    cout<<s.doesAliceWin("abcdefgh");
}