/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,y=x,last=0;;
        if(x<0) return false;
        while(x)
        {
            last=x%10;
            if((INT_MAX-last)/10<rev) return false;
            rev=rev*10+x%10;
            x=x/10;
        }
        if(rev==y) return true;
        return false;
    }
};
// @lc code=end

