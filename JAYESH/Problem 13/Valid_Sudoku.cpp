//Problem Link = https://leetcode.com/problems/valid-sudoku/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> check;
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    // Using insert correctly and fixing the condition
                    string row = "row" + to_string(i) + board[i][j];
                    string col = "col" + to_string(j) + board[i][j];
                    string box = "box" + to_string((i / 3) * 3 + j / 3) + board[i][j];

                    if (!check.insert(row).second || !check.insert(col).second || !check.insert(box).second) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
