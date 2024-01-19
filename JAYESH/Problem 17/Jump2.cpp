//Problem link = https://leetcode.com/problems/jump-game-ii/
class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0;
        int position = 0;
        int destination = 0;
        for(int i = 0; i<nums.size()-1; i++){
            destination = max(destination,nums[i]+i);
            if(position==i){
                position = destination;
                jump++;
            }
        }
        return jump;
    }
};
