//problem:
//https://leetcode.com/problems/combination-sum-iv/

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<uint32_t>dp(target+1);
        dp[0]=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=target;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i<nums[j])
                {
                    break;
                }
                dp[i]+=dp[i-nums[j]];
            }
        }
        return dp.back();
    }
};
