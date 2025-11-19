//O(n), O(n)

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> op;
        op.push_back(arr[arr.size()-1]);
        for (int i = arr.size()-2; i>=0; i--)
        {
            if (op.back()<=arr[i]) op.push_back(arr[i]);
        }
        reverse(op.begin(),op.end());
        return op;
    }
};
