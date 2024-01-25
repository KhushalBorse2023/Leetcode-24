//Problem link = https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int Row = matrix.size();
    int Col = matrix.size();      
    reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < Row; ++i) {
        for (int j = i; j < Col; ++j)
            swap(matrix[i][j], matrix[j][i]);
    }
}

    
};
