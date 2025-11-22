//O(n), O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int order = 0;
        for (int i = 0; i<n; i++)
        {
            if (nums[i]!=0){
                nums[order++]=nums[i];
            }
        }
        for (int i =order; i<n; i++)
        {
            nums[i]=0;
        }
    }
};
