// O(n), O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k% nums.size();
        if(nums.size()==1 || k == 0) return;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
