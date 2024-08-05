class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> numsWithIdx;

        for(size_t i = 0; i < nums.size(); i++){
            int numsComplement{target - nums[i]};
            try {
                int idx2(i);
                return {numsWithIdx.at(nums[i]), idx2};
            }catch(const out_of_range& e) {
                numsWithIdx[numsComplement] = i;
            } 
        }
        return {};
    }
};