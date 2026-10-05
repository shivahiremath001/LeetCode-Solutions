class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            vector<bool> row(9, false);
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                if (row[(int)board[i][j]]) return false;
                row[(int)board[i][j]] = true;
            }
        }
        for (int j = 0; j < 9; j++) {
            vector<bool> row(9, false);  //bool row[9] = {0}; this was not working check why later
            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') continue;
                if (row[(int)board[i][j]]) return false;
                row[(int)board[i][j]] = true;
            }
        }

        int x = 0, y = 0;
        for (int i = 0; i < 9; i++) {
            vector<bool> row(9, false);
            
            for (int j = x; j < x + 3; j++) {
                for (int k = y; k < y + 3; k++) {
                    if (board[j][k] == '.') continue;
                    if (row[(int)board[j][k]]) return false;
                    row[(int)board[j][k]] = true;
                }
            }
            x += 3;
            if (x > 6) {
                x = 0;
                y += 3;
            }
        }
        return 1;
    }
};