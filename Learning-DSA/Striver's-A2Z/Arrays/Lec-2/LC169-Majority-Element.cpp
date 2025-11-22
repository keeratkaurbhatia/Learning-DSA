//O(n), O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int res = nums[0];
        for (int i = 0; i<nums.size(); i++)
        {
            
            if(nums[i]!=res)
            {
                count--;
            }
            if(nums[i]==res)
            {
                count++;
            }
            if (count==0)
            {
                res = nums[i];
                count=1;
            }
        }
        return res;
    }
};
