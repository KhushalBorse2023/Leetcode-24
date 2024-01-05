//Problem Link = https://leetcode.com/problems/4sum/submissions/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> result;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; ++i) {

            for (int j = i + 1; j < n - 2; ++j) {

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = static_cast<long long>(nums[i]) + 
                                    static_cast<long long>(nums[j]) + 
                                    static_cast<long long>(nums[left]) + 
                                    static_cast<long long>(nums[right]);

                    if (sum < target) {
                        left++;
                    } else if (sum > target) {
                        right--;
                    } else {
                        result.insert({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                    }
                }
            }
        }

         return vector<vector<int>>(result.begin(), result.end());
    

        
    }
};
