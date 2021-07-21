/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int rev=0,last_digit=0,temp=1;

        while(x<=-10 || x>=10)
        {
            last_digit=x%10;
            x=x/10;
            rev=rev*10+last_digit;
        }
            last_digit=x%10;
            x=x/10;
            if((rev>0 && (INT_MAX-last_digit)/10<rev) | (rev<0 && (INT_MIN-last_digit)/10>rev))
            return 0;
            rev=rev*10+last_digit;
        return rev;

    
    }


};
// @lc code=end

