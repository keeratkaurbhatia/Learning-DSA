//O(n), O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set lookup(nums.begin(), nums.end());
        int longest = 0;
        for (int i : lookup)
        {
            
            if (lookup.find(i-1)==lookup.end())
            {
                int curr = i;
                int streak = 1;
            
                while(lookup.find(curr+1)!=lookup.end())
                {
                    curr++;
                    streak++;
                }
            
            longest = max(longest,streak);
            }
        }
        return longest;
    }
};
