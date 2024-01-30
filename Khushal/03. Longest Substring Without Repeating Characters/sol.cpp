class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=INT_MIN;
        if(s.length()==0)
        {
            return 0;
        }
        for(int i=0;i<s.length();i++)
        {
            vector<bool>v(256,false);
            for(int j=i;j<s.length();j++)
            {
                if(v[s[j]]==true)
                {
break;
                }
                else
                {
                    ans=max(ans,j-i+1);
                    v[s[j]]=true;
                }
            }
        }
    return ans;}
};

//Sliding Window using set
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      if(s.length()==0) return 0;
      int left=0;
      int right=0;
      int max_len=INT_MIN;
      unordered_set<char>ans;
      while(right!=s.length())
      {
          if(ans.find(s[right])!=ans.end())
          {
              ans.erase(s[left]);
              left++;
          }
          else
          {
              max_len=max(right-left+1,max_len);
              ans.insert(s[right]);
              right++;
          }
      }
      return max_len;}
};
