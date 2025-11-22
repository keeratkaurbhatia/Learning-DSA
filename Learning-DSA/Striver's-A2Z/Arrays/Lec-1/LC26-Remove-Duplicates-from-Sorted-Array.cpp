//O(n), O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int unique = 0;
        for (int check = 0; check<n; check++)
        {
            if (nums[check]<=nums[unique]) continue;
            else{
                int temp = nums[check];
                nums[check]= nums[unique+1];
                nums[unique+1]=temp;
                unique++;
            }
        }
        return unique+1;

    }
};

//O(n), O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 0;
        for (int check = 1; check < nums.size(); check++) {
            if (nums[check] != nums[unique]) {
                unique++;
                nums[unique] = nums[check];
            }
        }
        return unique + 1;
    }
};
