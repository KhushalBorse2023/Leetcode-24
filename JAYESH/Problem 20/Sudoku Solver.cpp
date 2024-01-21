//Problem link = https://leetcode.com/problems/sudoku-solver/
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') {
                    for (int val = '1'; val <= '9'; val++) { // Use characters '1' to '9'
                        if (isSafe(row, col, board, val)) {
                            board[row][col] = val;
                            bool nextSolutionPossible = solve(board);
                            if (nextSolutionPossible) {
                                return true;
                            } else {
                                // Backtrack
                                board[row][col] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool isSafe(int row, int col, vector<vector<char>>& board, char val) {
        for (int i = 0; i < 9; i++) {
            // Row check
            if (board[i][col] == val) {
                return false;
            }
            // Column check
            if (board[row][i] == val) {
                return false;
            }
            // Subgrid check
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val) {
                return false;
            }
        }
        return true;
    }
};
