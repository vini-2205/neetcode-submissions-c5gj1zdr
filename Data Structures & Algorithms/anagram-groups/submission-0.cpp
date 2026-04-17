class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map_anagrams;

        for(const string palavra : strs){
            vector<int> count(26,0);

            for(const char c : palavra){
                count[c - 'a']++;
            }
            
            string chave = "";
            for(int i=0; i<26; i++){
                chave += to_string(count[i]) + "/";
            }

            map_anagrams[chave].push_back(palavra);
        }

        vector<vector<string>> result;
        for (auto par : map_anagrams){
            result.push_back(par.second);
        }

        return result;
        
    }
};
