//Problem Link = https://leetcode.com/problems/plus-one/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        while(n>=0){
            if(digits[n]==9){
                digits[n] = 0;
            }
            else{
                digits[n]+=1;
                return digits;
            }
            n--;
        }
        //if it comes out of while loop means all elements are 9
        digits.insert(digits.begin(),1); // put 1 at the beginning
        return digits;

    }
};
