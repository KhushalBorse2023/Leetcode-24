//Problem Link = https://leetcode.com/problems/permutations/
//Method 1
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        do{
            ans.push_back(nums);
           
        }while(next_permutation(nums.begin(),nums.end()));
      return ans;
    }
};

//Method 2
class Solution {
private:
    void solve( vector<vector<int>>& ans,int index,vector<int>nums){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int j = index; j<nums.size(); j++){
            swap(nums[index],nums[j]);
            solve(ans,index+1,nums);
            // backtracking
            swap(nums[index],nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(ans,index,nums);
        return ans;
        
    }
};
