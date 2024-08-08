class Comparator {
    public:
        int operator()(pair<int, int>& tuple1, pair<int, int>& tuple2){
            return tuple1.second > tuple2.second;
        }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> kFreq;
        vector<int> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, Comparator> topKElements;

        for(size_t i=0; i < nums.size(); i++){
            kFreq[nums[i]]++;
        }
        for(auto it: kFreq){
            topKElements.push(make_pair(it.first, it.second));
            if(topKElements.size() > k) topKElements.pop();
        }

        while(topKElements.size() > 0){
            pair<int, int> top = topKElements.top();
            topKElements.pop();
            ans.push_back(top.first);
        }

        return ans;
    }
};
