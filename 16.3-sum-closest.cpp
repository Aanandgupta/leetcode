/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int start;
        int end;
        int closest=10000;
        int x,y;
        for(int i=0;i<size;i++){
            start=i+1;
            end=size-1;
            while(end>start)
            {
                x=nums[i]+nums[start]+nums[end]-target;
                y=closest-target;
                if(abs(x)<abs(y))
                {
                    closest=nums[i]+nums[start]+nums[end];
                    if(closest==target)
                    {
                        return target;
                    }
                }
                if(nums[i]+nums[start]+nums[end]>target)
                {
                    end--;
                }
                else{
                    start++;
                }

            }
        }
        return closest;
    }
};
// @lc code=end

