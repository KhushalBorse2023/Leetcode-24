Problem link =  https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        for(int i = 0; i<nums1.size(); i++){
            sort(nums1.begin(),nums1.end());
        }
        int start = 0;
        int end = nums1.size()-1;
        int size = nums1.size();
        int mid;
        if(size%2!=0){
            mid = (start+end)/2;
            return nums1[mid];
        }
        else{
            mid = (start+end)/2;
            return (nums1[mid]+nums1[mid+1])/2.0;
        }

    }
};
