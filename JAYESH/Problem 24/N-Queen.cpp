//Problem link = https://leetcode.com/problems/n-queens/
class Solution {
public:
    bool isSafe(int x, int y, int n, vector<string>& board) {
        //row check
        for (int i = 0; i < x; i++) {
            if (board[i][y] == 'Q') {
                return false;
            }
        }
        //left diagonal
        int row = x;
        int col = y;
        while (row >= 0 && col >= 0) {
            if (board[row][col] == 'Q') {
                return false;
            }
            row--;
            col--;
        }
        //Right diagonal
        row = x;
        col = y;
        while (row >= 0 && col < n) {
            if (board[row][col] == 'Q') {
                return false;
            }
            row--;
            col++;
        }
        return true;
    }

    bool nQueen(int x, int n, vector<string>& board, vector<vector<string>>& result) {
        //base condition
        if (x >= n) {
            result.push_back(board);
            return true;
        }

        bool findSolution = false;
        for (int i = 0; i < n; i++) {
            if (isSafe(x, i, n, board)) {
                board[x][i] = 'Q';
                findSolution = nQueen(x + 1, n, board, result) || findSolution;
                board[x][i] = '.';
            }
        }
        return findSolution;
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        if (nQueen(0, n, board, result)) {
            return result;
        }
        return {};
    }
};
