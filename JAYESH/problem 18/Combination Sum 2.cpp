//Problem Link = https://leetcode.com/problems/combination-sum-ii/
class Solution {
public:
    void findcombination(int index, int target, vector<int>& arr, set<vector<int>>& ans, vector<int>& currentCombination) {
        if (target == 0) {
            ans.insert(currentCombination);
            return;
        }

        for (int i = index; i < arr.size(); ++i) {
            // Skip duplicate elements
            if (i > index && arr[i] == arr[i - 1]) {
                continue;
            }

            if (arr[i] <= target) {
                currentCombination.push_back(arr[i]);
                findcombination(i + 1, target - arr[i], arr, ans, currentCombination);
                currentCombination.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<int> currentCombination;

        // Sort candidates to handle duplicates
        sort(candidates.begin(), candidates.end());

        findcombination(0, target, candidates, ans, currentCombination);

        // Convert set of sets to vector of vectors
        return {ans.begin(), ans.end()};
    }
};
