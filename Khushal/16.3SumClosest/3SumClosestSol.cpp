class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      int sum=0;
      sort(nums.begin(),nums.end());
      int result;int  diff=INT_MAX;
      for(int i=0;i<nums.size();i++)
      {
          int j=i+1;
          int k=nums.size()-1;
          while(j<k){
              sum=nums[i]+nums[j]+nums[k];
                         
        if(abs(target-sum)<diff)
          {
              result=sum;
              diff=abs(target-sum);
          }
              if(sum==target)
              {
                  return sum;
              }
          else if(sum>target)
          {
              k--;
          }
          else
          {
              j++;
          }
          }
      }
    return result;}
};