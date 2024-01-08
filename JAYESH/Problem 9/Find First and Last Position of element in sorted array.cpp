//Problem Link = https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==target){
                if(first==-1){
                    first = i;
                }
                last = i;
            }
            
        }
        return {first,last};
    }
};
