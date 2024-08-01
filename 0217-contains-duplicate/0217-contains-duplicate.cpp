class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;

        for(int num : nums){
            numSet.insert(num);
        };
        return numSet.size() < nums.size();
    }
};