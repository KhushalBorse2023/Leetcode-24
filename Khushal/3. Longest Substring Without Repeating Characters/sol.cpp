class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result=INT_MIN;
if(s.length()==0) return 0;
vector<int>v(256,-1);
int start=-1;

for(int i=0;i<s.length();i++)
{
if(v[s[i]]>start)
{
    start=v[s[i]];

}
v[s[i]]=i;
result=max(result,i-start);


}
        return result;
    }
};
