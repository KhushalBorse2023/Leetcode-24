//Problem Link = https://leetcode.com/problems/spiral-matrix/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int Row = matrix.size();
        int Col = matrix[0].size();  
        
        int count = 0;
        int total = Row*Col;
        
         int FirstRow = 0;
         int FirstColumn = 0;
         int LastRow = Row-1;
         int LastColumn = Col-1;
         
        
        
        while(count<total){
        // Printing First Row
        for (int i = FirstColumn; i <=LastColumn && count<total; i++)
        {
            ans.push_back(matrix[FirstRow][i]);
            count++;
        }
        FirstRow++;
        // Printing last Column
        for (int i = FirstRow; i <=LastRow && count<total; i++)
        {
           ans.push_back(matrix[i][LastColumn]);
            count++;
        }
        LastColumn--;
        // Printing Last Row
        
        for (int i = LastColumn; i >= FirstColumn && count<total; i--)
        {
            ans.push_back(matrix[LastRow][i]);
            count++;
         }
        LastRow--;
        
        // Printing First Column
      
        for (int i = LastRow; i >=  FirstRow && count<total; i--)
        {
             ans.push_back(matrix[i][FirstColumn]);
            count++;
        }
        FirstColumn++;
        

            
        }
        return ans;
    }
};
