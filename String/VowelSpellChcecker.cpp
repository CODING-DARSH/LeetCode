#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact;                
        unordered_map<string, string> caseInsensitive; 
        unordered_map<string, string> vowelInsensitive; 
        
        
        auto devowel = [&](string w) {
            for (char &ch : w) {
                ch = tolower(ch);
                if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                    ch = '*';
            }
            return w;
        };
        for (string w : wordlist) {
            exact.insert(w);
            
            string low = w;
            for (char &c : low) c = tolower(c);
            
            if (!caseInsensitive.count(low)) 
                caseInsensitive[low] = w;
            
            string vow = devowel(low);
            if (!vowelInsensitive.count(vow)) 
                vowelInsensitive[vow] = w;
        }
        vector<string> ans;
        for (string q : queries) {
            if (exact.count(q)) { 
                ans.push_back(q); 
                continue;
            }
            
            string low = q;
            for (char &c : low) c = tolower(c);
            
            if (caseInsensitive.count(low)) {
                ans.push_back(caseInsensitive[low]);
                continue;
            }
            
            string vow = devowel(low);
            if (vowelInsensitive.count(vow)) {
                ans.push_back(vowelInsensitive[vow]);
                continue;
            }
            
            ans.push_back("");
        }
        return ans;
    }
};


int main() {
    Solution sol;
    
    vector<string> wordlist = {"KiTe","kite","hare","Hare"};
    vector<string> queries = {"kite","Kite","KiTe","Hare","HARE","Hear","hear","keti","keet","keto"};
    
    vector<string> result = sol.spellchecker(wordlist, queries);
    
    for (string s : result) cout << (s.empty() ? "\"\"" : s) << " ";
    cout << endl;
    
    return 0;
}