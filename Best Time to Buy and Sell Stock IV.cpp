class Solution {
private:
    int solveMaxProfit (vector<int> &prices) {
        int sum = 0, diff = 0;
        
        for(int n = 1; n < prices.size(); n++){
            diff = prices[n] - prices[n-1];
            if(diff > 0)
                sum+=diff;
        }
        return sum;
    }
public:
    int maxProfit(int k, vector<int> &prices) {
        if(prices.empty() || k == 0)  
          return 0;  
  
        if(k >= prices.size())  
          return solveMaxProfit(prices);  
  
        vector<int> global(k + 1, 0);  
        vector<int> local(k + 1, 0);  
  
        for(int i = 1; i < prices.size(); i++) {  
            int diff = prices[i] - prices[i - 1];  
            for(int j = k; j >= 1; j--) {  
                local[j] = max(local[j] + diff, global[j - 1] + max(diff, 0));  
                global[j] = max(global[j], local[j]);  
            }  
        }  
  
        return global[k];  
        
    }
    };
