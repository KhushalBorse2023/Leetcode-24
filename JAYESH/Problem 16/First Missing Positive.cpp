//Problem Link https://leetcode.com/problems/first-missing-positive/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<nums.size(); i++){
            int element = nums[i]; //2
            if(element>0 && element<=n){
                 int space = element - 1; //1
                 if(nums[space]!=element){
                     swap(nums[space],nums[i]);
                     i--;
                 }
            }

        }
        for(int i = 0; i<nums.size(); i++){
            if(i+1==nums[i]){ // 0->1  1->2
                continue;
            }
            else if(i+1!=nums[i]){
                return i+1;
            }

        }
        return n+1;
        
    }
};
