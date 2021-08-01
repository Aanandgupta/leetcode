/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
        unordered_set<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int firstIndex;
        int lastIndex;
        sort(nums.begin(),nums.end());
        unordered_set<vector<int>> ary;
        for(int i=0;i<n-2;i++)
        {
            firstIndex=i+1;
            lastIndex=n-1;
            while(lastIndex>firstIndex)
            {
                if(nums[firstIndex]+nums[lastIndex]+nums[i]==0)
                {
                
                 ary.insert({nums[firstIndex],nums[lastIndex],nums[i]});
                //  ary.push_back({nums[firstIndex],nums[lastIndex],nums[i]});
            
                

                 firstIndex++;
                 lastIndex--;   
                }
                else if(nums[firstIndex]+nums[lastIndex]+nums[i]<0){
                    firstIndex++;
                }
                else{
                    lastIndex--;
                }
            }
            

        }
        return ary;    
    }
};
// @lc code=end

