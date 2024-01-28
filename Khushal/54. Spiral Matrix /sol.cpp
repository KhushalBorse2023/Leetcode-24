class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        int t=0,l=0,d=0;
        int r=matrix[0].size()-1, b=matrix.size()-1;
        while(l<=r and t<=b)
        {
           if(d==0)
           {
           for(int i=l;i<=r;i++)
           {
            result.push_back(matrix[t][i]);
           }
           d=1;
           t++;
           }
else if(d==1)
{
    for(int i=t ;i<=b ;i++)
    {
        result.push_back(matrix[i][r]);
    }
    d=2;
    r--;
}
else if(d==2)
{
   for(int i=r;i>=l;i--)
   {
       result.push_back(matrix[b][i]);

   } 
   d=3;
b--;
}
else if(d==3)
{
    for(int i=b ;i>= t;i--)
    {
        result.push_back(matrix[i][l]);
        
    }l++;
    d=0;
}
        }
    return result;}
};

