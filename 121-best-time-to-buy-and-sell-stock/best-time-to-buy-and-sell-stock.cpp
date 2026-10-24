class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int least_value=prices[0];
    int maximum_profit=0;
    for ( int i =1 ; i<prices.size() ; i++){
        int profit=prices[i]-least_value ;
        least_value=min(least_value,prices[i]);
        maximum_profit=max(profit,maximum_profit);
    } 
    return maximum_profit ;   
    }
};