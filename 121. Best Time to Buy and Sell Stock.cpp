class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mn = prices[0];
        for(auto &it: prices){
            int k = it-mn;
            if(k>profit) profit=k;
            if(it<mn) mn=it;
        }
        return profit;
    }
};
