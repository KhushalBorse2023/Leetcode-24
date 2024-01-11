class Solution {
public:

    bool isValidSudoku(std::vector<std::vector<char>>& board) {
    unordered_set<string> seen;

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    if (!seen.insert("row" + to_string(i) + board[i][j]).second ||
                        !seen.insert("col" +to_string(j) + board[i][j]).second ||
                        !seen.insert("box" + to_string((i / 3) * 3 + (j / 3)) + board[i][j]).second) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};
