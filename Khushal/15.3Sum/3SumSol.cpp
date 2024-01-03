class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    vector<int> ans = {nums[i], nums[j], nums[k]};
                    result.push_back(ans);
                    j++;
                    k--;

                    while (j < k and nums[j] == nums[j - 1])
                        j++;

                    while (j < k and nums[k] == nums[k + 1])
                        k--;
                }
            }
        }

        return result;
    }
};