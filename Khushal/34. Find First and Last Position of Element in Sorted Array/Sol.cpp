class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       if(find(nums.begin(),nums.end(),target)==nums.end()) return {-1,-1};
        int a=first(nums,target);
        int b=second(nums,target);
        return {a,b};
    }
    int first(vector<int>&nums,int target)
    {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int result;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                result=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return result;
    }
     int second(vector<int>&nums,int target)
    {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int result;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                result=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
   return result; }
};
