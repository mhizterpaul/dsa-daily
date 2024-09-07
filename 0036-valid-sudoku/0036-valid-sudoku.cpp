class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rows(9, vector<bool>(9,false)
        );
        vector<vector<bool>> cols(9, vector<bool>(9, false));
        vector<vector<bool>> subgrid(9, vector<bool>(9, false));
        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                char currChar = board[row][col];
                if(currChar == '.') continue;

                int num = currChar - '0' - 1;
                int subgridIdx = (row/3)*3 + col/3;

                if(cols[col][num] || rows[row][num] 
                || subgrid[subgridIdx][num]){
                    return false;
                }

                cols[col][num] = true;
                rows[row][num] = true;
                subgrid[subgridIdx][num] = true;
            }
        }
        return true;
    }
};