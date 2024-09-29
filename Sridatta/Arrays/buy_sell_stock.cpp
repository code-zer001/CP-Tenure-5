//Code for faster execution time
int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
//Solution code
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int profit,min_price=prices[0];
        for(int i=1; i<prices.size();i++){
            profit = prices[i] - min_price;
            max_profit = max_profit < profit ? profit : max_profit;
            min_price = min_price > prices[i] ? prices[i] : min_price;
        }
    return max_profit;
    }
};