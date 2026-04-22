class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int, int> sizeNumbers;

        for(int num : nums){
            sizeNumbers[num]++;
        }

        std::vector<std::pair<int,int>>orderedMap(sizeNumbers.begin(), sizeNumbers.end());

        std::sort(orderedMap.begin(), orderedMap.end(), [](const auto&a, const auto&b){
            return a.second > b.second;
        });

        std::vector<int> ordenado;
        for(int i=0; i<k; i++){
            ordenado.push_back(orderedMap[i].first);
        }

        return ordenado;
        
    }
};
