//O(n),O(1)

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxEl = arr[0];
        int secL = -1;
        int len = arr.size();
        for(int i = 0; i<len; i++){
            if (arr[i]>maxEl){
                secL=maxEl;
                maxEl=arr[i];
            }
            if (arr[i]<maxEl && arr[i]>secL){
                secL=arr[i];
            }
        }
        return secL;
    }
};
