#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();

        int upperCount = 0, lowerCount = 0;
        for (int i = 0; i < n; i++) {
            if (word[i] >= 'A' && word[i] <= 'Z')
                upperCount++;
            else if (word[i] >= 'a' && word[i] <= 'z')
                lowerCount++;
        }
        if (upperCount == n || lowerCount == n) return true;

        if (word[0] >= 'A' && word[0] <= 'Z' && lowerCount == n - 1)
            return true;

        return false;
    }
};