int maxProfit(vector<int>& prices) {
    
    int minBuy = INT_MAX;
    int maxProfit = 0;
    
    for(int i = 0; i < prices.size(); i++) {
        if (prices[i] < minBuy) {
            minBuy = prices[i];
        }
        
        int currentProfit = prices[i] - minBuy;
        
        if (currentProfit > maxProfit){
            maxProfit = currentProfit;
        }
    }
    return maxProfit;
}
//         int check = prices[0];
//         pair<int, int> buyStock;
//         pair<int, int> sellStock;
//         for(int i = 0; i < prices.size(); i++) {
//             if (prices[i] < check) {
//                 check = prices[i];
//                 buyStock.first = prices[i];
//                 buyStock.second = i;
//                 break;
//             }
//         }
    
    
//         sellStock.first = INT_MIN;
//         for (int i = buyStock.second + 1; i < prices.size(); i++) {
//             if (prices[i] > buyStock.first && prices[i] > sellStock.first) {
//                 sellStock.first = prices[i];
//                 sellStock.second = i;
//             }
//         }
//         if (sellStock.first == INT_MIN)
//             return 0;
//         else
//             return sellStock.first - buyStock.first;
    
    // int maxPrice = prices[0];
    // int minPrice = prices[0];
    
//         for(auto it : prices) {
//             if (minPrice > it) {
//                 minPrice = it;
//                 maxPrice = minPrice;
//             } 
//             if (maxPrice < it) {
//                 maxPrice = it;
//             }
//         }
//         return maxPrice - minPrice;        
// }