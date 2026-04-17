class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map_anagrams;

        for(const string palavra : strs){
            string chave = palavra;
            sort(chave.begin(), chave.end());
            map_anagrams[chave].push_back(palavra);
        }
        
        vector<vector<string>> resultado;
        for(auto par : map_anagrams){
            resultado.push_back(par.second);
        }

        return resultado;
    }
};
