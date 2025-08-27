class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            // step 1: keep track of the min price so far
            buy = min(buy, prices[i]);

            // step 2: check profit if sold today
            profit = max(profit, prices[i] - buy);
        }
        return profit;
    }
};
