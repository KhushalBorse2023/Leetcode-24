class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int area;
        int start=0;
        int end=height.size()-1;
        while(start<end)
        {
            area=min(height[start],height[end])*(end-start);
            if(area>=max_area)
            {
                max_area=area;

            }
            if(min(height[start],height[end])==height[start])
            {
                start++;
            }
            else
            {
            end--;
        }
        }
        return max_area;
    }
};