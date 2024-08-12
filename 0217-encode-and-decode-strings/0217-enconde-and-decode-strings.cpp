class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(auto str: strs){
            result += to_string(str.size()) + ' ' + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> result;
        while(i < s.size()){
            int j = i;
            while(s[j] != ' ') j++;
            string strSize = s.substr(i, j-i);
            int size = stoi(strSize);
            string word = s.substr(j+1, size);
            result.push_back(word);
            i = j+1+size;
        }
        return result;
    }
};
