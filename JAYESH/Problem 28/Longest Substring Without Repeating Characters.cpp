//Problem link = https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int maxi = 0;

        int start = 0;
        int end = 0;

        while(start<s.size()){
            //check if character is already present in set
            auto it = st.find(s[start]);
            if(it==st.end())// if it is at end means character is unique
            {
                maxi = max(start-end+1,maxi);
                st.insert(s[start]);
                start++;
            }
            // Duplicate character found
            else{
                st.erase(s[end]);
                end++;
            }
        }
        return maxi;
    }
};
