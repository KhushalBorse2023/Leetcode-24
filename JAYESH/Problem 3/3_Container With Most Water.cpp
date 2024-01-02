// Problem Link = https://leetcode.com/problems/container-with-most-water/
//Method 1
class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int>v1;
        int left = 0;
        int right = height.size()-1;
        while(left<right){
            int width = right - left;
            int area;
            if(height[left]>height[right]){
                area = height[right]*width;
                v1.push_back(area);
                right--;
               
            }
            else if(height[left]<height[right]){
                area = height[left]*width;
                 v1.push_back(area);
                 left++;
                 
            }
            else{
               area = height[left]*width; 
                v1.push_back(area);
                left++;
                
            }
        }
        int maxi = -1;
        for(int i = 0; i<v1.size(); i++){
            if(v1[i]>maxi){
                maxi = v1[i];
               
            }
        }
        return maxi;
    }

};
// Method 2
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int maxArea = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int width = right - left;
            int area = h * width;
            maxArea = max(maxArea, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};
