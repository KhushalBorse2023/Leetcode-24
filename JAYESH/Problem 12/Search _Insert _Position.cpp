//Problem Link = https://leetcode.com/problems/search-insert-position/description/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool found = false;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==target){
                found = true;
                return i;
                break;
            }
        }
        if(found==false){
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            for(int i = 0; i<nums.size(); i++){
                if(nums[i]==target){
                    found = true;
                    return i;
                }
            }
        }
        return 0;
        
    }
};
