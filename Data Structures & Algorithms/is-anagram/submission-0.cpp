#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) return false;

        std::vector<std::pair<int, int>> letters(26, {0, 0});

        for (int i = 0; i < s.size(); i++) {
            letters[s[i] - 'a'].first++; 
            letters[t[i] - 'a'].second++;
        }

        for (int i = 0; i < 26; i++) {
            if (letters[i].first != letters[i].second) {
                return false;
            }
        }

        return true;
    }
};