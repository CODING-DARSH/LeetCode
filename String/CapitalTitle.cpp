#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string capitalizeTitle(string title) {
        int i,n=title.size(),j,k;
        int wordlength;
        for(i=0;i<n;){   
            j=i;
            while(j<n && title[j]!=' '){
                j++;
            }
        wordlength=j-i;
        if(wordlength<=2){
            for(k=i;k<=j;k++){
            title[k]=tolower(title[k]);
            }
        }
        else{
            title[i]=toupper(title[i]);
            for(k=i+1;k<j;k++){
                title[k]=tolower(title[k]);
            }
        }
        i=j+1;
        }
        return title;
    }
};