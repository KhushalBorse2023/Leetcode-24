//https://leetcode.com/problems/find-the-difference/
class Solution {
    public char findTheDifference(String s, String t) {
        int sumS = 0;
        for(int i = 0; i<s.length(); i++){
            char ch = s.charAt(i);
            sumS+=ch;
        }
        int sumt = 0;
        for(int i = 0; i<t.length(); i++){
            char ch = t.charAt(i);
            sumt+=ch;
        }
        char ans = (char)(sumt-sumS);
        return ans;
    }
}
