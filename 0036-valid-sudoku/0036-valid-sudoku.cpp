class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //using brute force with hashmaps
        map<string, int> validMap; 
        map<string, int> validMap1;  
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){ 
                char curr = board[i][j];
                char curr1 = board[j][i];
                //3x3 sub matrix wise label
                string key = curr + to_string((int)floor(i/3))
                + to_string((int)floor(j/3));
                //row-wise label
                string key1 = curr + to_string(i);
                //column-wise label
                string key2 = curr1 + to_string(i);
                if(curr != '.'){
                    validMap[key]++;
                    validMap[key1]++;
                }
                if(curr1 != '.') validMap1[key2]++;
                if(
                    (curr != '.' && (validMap[key] > 1||validMap[key1]>1))
                    || (curr1 != '.' && validMap1[key2]>1)
                ){
                    return false;
                }
            }
        }
        return true;
    }
};