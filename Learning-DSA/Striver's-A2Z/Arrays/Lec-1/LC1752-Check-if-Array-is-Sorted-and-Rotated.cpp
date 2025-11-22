//O(n), O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int i =1;
        for (; i<n; i++)
        {
            if (nums[i-1]>nums[i]) break;
        }
        if (i==n) return true;
        int start = i;
        int j = (i+1)%n;//
        while(j!=start)
        {
            if (nums[j]>=nums[i]) {
                j=(j+1)%n; 
                i=(i+1)%n;
                }
            else return false;
        }
        return true;
    }
};

//O(n), O(1)

bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i+1)%n]) count++;
        if (count > 1) return false;
    }
    return true;
}
