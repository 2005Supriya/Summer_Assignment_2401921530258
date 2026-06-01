#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini=prices[0];
        int i;
        int cost;
        for(i=1; i<prices.size(); i++){
            cost=prices[i]-mini; //profit for today(selling price-buying price)
            profit=max(profit,cost);
            mini=min(mini,prices[i]);

        }
        return profit;
        
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit = " << maxProfit(prices);

    return 0;
}