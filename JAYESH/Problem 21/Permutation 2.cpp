//Problem link = https://leetcode.com/problems/permutations-ii/
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        do{
            ans.insert(nums);
        }while(next_permutation(nums.begin(),nums.end()));

    return vector<vector<int>>(ans.begin(), ans.end());
    }
};
