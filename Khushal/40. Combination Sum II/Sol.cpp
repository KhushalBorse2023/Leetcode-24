class Solution {
public:
void solve(vector<int>& candidates, int target,vector<vector<int>>&result,vector<int>&ans,int start)
{

    if(target==0)
    {
        result.push_back(ans);
        return ;
    }
     if(target<0) return ;
    for(int i=start;i<candidates.size();i++)
    {   if(i>start and candidates[i]==candidates[i-1]) continue;
        ans.push_back(candidates[i]);
        solve(candidates,target-candidates[i],result,ans,i+1);
        ans.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>ans;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,result,ans,0);
        return result;

    }
};
