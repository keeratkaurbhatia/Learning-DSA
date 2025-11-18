//O(n),O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxprof = 0;

        for(int i=1;i<prices.size();i++){
            maxprof = max(maxprof,prices[i]-minprice);
            minprice = min(prices[i],minprice);
        }

        return maxprof;
    }
};
