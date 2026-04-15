class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std:: unordered_map<int, int> count;

        for(int i=0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(count.find(diff) != count.end()){
                return {count[diff], i};
            }
            else{
                count[nums[i]] = i;
            }
        }
        return {};
    }
};
