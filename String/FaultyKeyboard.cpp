#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string finalString(string s) {
        string news;
        for(char c : s) {
            if(c == 'i') {
                reverse(news.begin(), news.end());
            } else {
                news += c;
            }
        }
        return news;
    }
};