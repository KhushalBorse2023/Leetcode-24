class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long  target) {
        vector<int>ans;
        set<vector<int>>st;
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                long long  newtarget=target-nums[i]-nums[j];
           long long x=j+1;
              long  long  y=nums.size()-1;
                while(x<y)
                {
                    long long  sum=nums[x]+nums[y];
                    if(sum>newtarget)
                    {
                        y--;
                    }
                    else if(sum<newtarget)
                    {
                        x++;
                    }
                    else
                    {
st.insert({nums[i],nums[j],nums[x],nums[y]});
x++;
y--;
                    }
                }


            }
        }
        for( auto u:st)
        {
           result.push_back(u); 
        }
  return result;  }
};