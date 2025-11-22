//O(n),O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsec = 0;
        int count = 0;
        for (int i = 0; i< nums.size(); i++)
        {
            if (nums[i]==1)
            {
                count++;
            }
            if(count>maxConsec)
            {
                maxConsec=count;
            }
            if (nums[i]==0)
            {
                count = 0;
            }
        }
        return maxConsec;
    }
};
