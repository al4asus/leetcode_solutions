class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minFiyat = INT_MAX;
        int maxKar = 0;

        for(int i = 0; i < prices.size(); i++){
            if (prices[i] < minFiyat){
                minFiyat = prices[i];
            }
            else if(prices[i] > minFiyat){
                int kar = prices[i] - minFiyat;
                if(kar > maxKar){
                    maxKar = kar;
                }
            }
        }
        return maxKar;
    }
};
