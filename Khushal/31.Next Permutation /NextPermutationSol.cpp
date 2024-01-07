class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int k=n-2;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]<=nums[i-1])
            {
                k--;
            }
            else
            {
                break;
            }

        }
        if(k==-1)
        {
            reverse(nums,0,n-1);
            return ;
        }
for(int i=n-1;i>0;i--)
{
    if(nums[k]<nums[i])
    {
        swap(nums[k],nums[i]);
        break;
    }

}
reverse(nums,k+1,n-1);
        
    }
    void reverse(vector<int>&nums,int start,int end)
    {

while(start<=end)
{
    int temp=nums[start];
    nums[start]=nums[end];
    nums[end]=temp;
    start++;
    end--;
}

    }
};
