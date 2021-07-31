/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ary;
        unordered_map<int,int> fre;
        unordered_map<int,int>::iterator itr;
        unordered_map<int,int>::iterator itr2;
        for(int i=0;i<nums.size();i++)
        {
            if(fre.find(nums[i]) != fre.end())
            fre[nums[i]]+=1;
            else
            fre[nums[i]]=1;
        }
        for(itr=fre.begin();itr!=fre.end();itr++)
        {
            int j=itr->first;
            int k=itr->second;
            int helper=0;
            int m=0;
            if(k>1 && fre.find(-2*j)!=fre.end())
            {
                helper=-2*j;
                m=j;
                ary.push_back({j,m,helper]);
            }
            
            for(itr2=++itr;itr!=fre.end();itr++)
            {
                helper=itr2->first;
                int l=-1*(itr2->first+j);
                if(fre.find(l)!=fre.end() && fre[l]>0)
                ary.push_back([j,helper,l]);
            }
            fre[itr->first]=0;
        }
        return ary;    
    }
};
// @lc code=end

