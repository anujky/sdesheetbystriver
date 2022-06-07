#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int min_price=prices[0];
    int maxProfit=INT_MIN;
    for(int i=1;i<prices.size();i++)
    {
        min_price=min(min_price,prices[i]);
        maxProfit=max(maxProfit,prices[i]-min_price);
    }
    return maxProfit;
}
