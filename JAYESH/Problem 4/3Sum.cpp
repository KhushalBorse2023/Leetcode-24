class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i = 0; i<nums.size()-2; i++){
        int j = i+1;
        int k = nums.size()-1;
        int a = nums[i]; //a+j+k=0 that is j+k=-a
        while(j<k){
            int sum = nums[j]+nums[k];
            if(sum<-a){
                j++;
            }
            else if(sum>-a){
                k--;
            }
            else if(sum==-a){
                ans.insert({a, nums[j], nums[k]});
                j++;
                k--;
            }
        }
    }
    // // Converting set to vector for the final result
    return vector<vector<int>>(ans.begin(), ans.end());
    }
    
};
