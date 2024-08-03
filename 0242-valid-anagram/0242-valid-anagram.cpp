class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>  anagram;
        if(s.size() != t.size()) return false;

        for(size_t i = 0; i < s.size(); i++ ){
            anagram[s[i]]++;
            anagram[t[i]]--;
        }
        for(size_t i = 0; i < s.size(); i++){
            if(anagram[s[i]] != 0) return false; 
        }
        return true;
    }
};