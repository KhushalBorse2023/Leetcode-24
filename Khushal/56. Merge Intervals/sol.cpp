class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int j=0;
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][0]<=ans[j][1])
            {
                ans[j][1]=max(intervals[i][1],ans[j][1]);
                
            }
            else
            {
                ans.push_back(intervals[i]);
                j++;
            }
        }
    return ans;}
};
