
//solve
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> ary;
        int len=nums.size();
        int i=0;
        for(int j=0;j<len;j++)
        {
            i=nums[j];
            if(ary.find(target-i)!=ary.end())
            {
                return {j,ary.find(target-i)->second};
            }
            else{
                ary[i]=j;
            }
        }
        return {-1,0};
        
    }
};
// @lc code=end
//22