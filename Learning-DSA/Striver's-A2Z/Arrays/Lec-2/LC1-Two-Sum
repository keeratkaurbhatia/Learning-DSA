//O(n), O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prefix;
        for (int i =0; i<nums.size(); i++)
        {
            int rem = target-nums[i];
            if(prefix.find(nums[i])!=prefix.end())
            {
                return {i, prefix[nums[i]]};
            }
            if(prefix.find(rem)==prefix.end())
            {
                prefix[rem]=i;
            }
        }
        return {-1,-1};
    }
};
