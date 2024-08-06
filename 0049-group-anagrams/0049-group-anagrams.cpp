class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        vector<string> base;
        for(auto str: strs){
            string baseStr = str;
            sort(baseStr.begin(), baseStr.end());
            auto findBaseStr = find(base.begin(), base.end(), baseStr);
            if(findBaseStr != base.end()){
                int idx = distance(base.begin(), findBaseStr);
                anagrams[idx].push_back(str);
            }else{
                base.push_back(baseStr);
                anagrams.push_back({str});
            }
        }
        return anagrams;
    }
};