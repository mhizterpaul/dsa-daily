class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;

        copy(nums.begin(), nums.end(), inserter(numSet, numSet.begin()));
        return numSet.size() < nums.size();
    }
};