class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>maxi(n,0);
        maxi[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            maxi[i]=max(maxi[i+1],prices[i]);
        }
            int max_profit = 0;
            for(int i=0;i<n-1;i++)
            {
                int buying_price=prices[i];
                int selling_prices=maxi[i+1];
                max_profit = max(max_profit,selling_prices-buying_price);
            }
        

        return max_profit;
    }
};