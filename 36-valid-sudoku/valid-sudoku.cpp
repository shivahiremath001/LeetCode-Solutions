class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            bool row[9] = {0};
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                if (row[board[i][j] - '1']) return false;
                row[board[i][j] - '1'] = true;
            }
        }
        for (int j = 0; j < 9; j++) {
            bool row[9] = {0};
            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') continue;
                if (row[board[i][j] - '1']) return false;
                row[board[i][j] - '1'] = true;
            }
        }

        int x = 0, y = 0;
        for (int i = 0; i < 9; i++) {
            bool row[9] = {0};
            
            for (int j = x; j < x + 3; j++) {
                for (int k = y; k < y + 3; k++) {
                    if (board[j][k] == '.') continue;
                    if (row[board[j][k] - '1']) return false;
                    row[board[j][k] - '1'] = true;
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