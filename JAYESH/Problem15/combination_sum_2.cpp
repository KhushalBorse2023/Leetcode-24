// link = https://leetcode.com/problems/combination-sum-ii/description/
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        for(int i = 0; i<candidates.size(); i++){
            int j = i+1;
            int k = candidates.size()-1;
            while(j<k){
                int sum = candidates[i]+candidates[j]+candidates[k];
                if(sum==target){
                    ans.insert({candidates[i],candidates[j],candidates[k]});
                    j++;
                    k--;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        for(int i = 0; i<candidates.size(); i++){
            int end = candidates.size()-1;
            while(i<end){
                int sum = candidates[i]+candidates[end];
                if(sum==target){
                    ans.insert({candidates[i],candidates[end]});
                    i++;
                    end--;
                }
                else if(sum>target){
                    end--;
                }
                else{
                    i++;
                }
            }

        }
        for(int i = 0; i<candidates.size(); i++){
             if(candidates[i]==target){
                ans.insert({candidates[i]});
                }
        }

      
     return vector<vector<int>>(ans.begin(), ans.end());   
    }
};
