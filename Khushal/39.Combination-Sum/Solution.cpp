class Solution {
public:
void solve(int start,vector<vector<int>>&result,vector<int>&ans,vector<int>& candidates,int target)
{
    if(target==0 )
    {
        result.push_back(ans);
        return ;
    }
    if(target<0) return ;
    for(int i=start;i<candidates.size();i++)
    {
        ans.push_back(candidates[i]);
        solve(i,result,ans,candidates,target-candidates[i]);
        ans.pop_back();
    }
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>ans;
        solve(0,result,ans,candidates,target);
        return result;
    }
};
