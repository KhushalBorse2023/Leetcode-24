class Solution {
public:
    void solve(vector<int>&nums,int start,set<vector<int>>&result)
    {
        if(start>=nums.size())
        {
            result.insert(nums);
            return ;
        }
        for(int i=start;i<nums.size();i++)
        {
            swap(nums[i],nums[start]);
            solve(nums,start+1,result);
            swap(nums[i],nums[start]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>result;
        solve(nums,0,result);
        vector<vector<int>>f_result(result.begin(),result.end());
        return f_result;
    }
};
