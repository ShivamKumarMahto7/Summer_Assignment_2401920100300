class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int n = prices.size();
        int profit = 0;
        for(int i =0;i<n;i++){
                 if(prices[i]<mini){
                mini = prices[i];
                }
               else{
                  profit = prices[i]-mini;
                  maxi = max(profit , maxi);
               }
                }
        if(maxi==INT_MIN){
            return 0;
             }      
        return maxi;
    }
};
