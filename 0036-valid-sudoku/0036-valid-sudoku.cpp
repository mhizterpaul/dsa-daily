class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //using brute force with hashmaps
        map<string, int> validMap; 
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                char curr = board[i][j];
                string key = curr + to_string((int)floor(i/3))
                + to_string((int)floor(j/3));
                string key1 = curr + to_string(i);
                if(curr != '.'){
                    validMap[key]++;
                    validMap[key1]++;
                } 
                if(curr != '.' && (validMap[key] > 1||validMap[key1]>1)){
                    return false;
                }
            }
        }
        map<string, int> validMap1;
        for(int j = 0; j < board[0].size(); j++){
            for(int i = 0; i < board.size(); i++){
                char curr = board[i][j];
                string key = curr + to_string((int)floor(i/3))
                + to_string((int)floor(j/3));
                string key1 = curr + to_string(j);
                if(curr != '.'){
                    validMap1[key]++;
                    validMap1[key1]++;
                }
                if(curr != '.' && (validMap1[key] > 1||validMap1[key1]>1)){
                    return false;
                }
            }
        }
        return true;
    }
};