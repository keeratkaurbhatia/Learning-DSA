//O(n), O(n)

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<long long,int> preSum;
        long long sum=0;
        int maxL=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k){
                maxL = max(maxL,i+1);
            }
            long long rem = sum-k;
            if(preSum.find(rem)!=preSum.end())
            {
                int len = i-preSum[rem];
                maxL= max(len,maxL);
            } 
            if(preSum.find(sum)==preSum.end())
            {
            preSum[sum]=i;
            }
        }
        return maxL;
    }
};
