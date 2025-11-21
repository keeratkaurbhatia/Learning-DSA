//O(n), O(1)

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int len = arr.size();
        int maxEl = arr[0];
        for (int i = 0; i<len; i++){
            maxEl = max(maxEl, arr[i]);
        }
        return maxEl;
    }
};
