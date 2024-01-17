class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int ,bool>um;
        for (auto it:nums)
        {
            um[it]=true;
               
        }
        int i=1;
        while(true)
        {
            if(um.find(i)==um.end())
            { return i;}
            i++;
        }
   return 0; }
};
