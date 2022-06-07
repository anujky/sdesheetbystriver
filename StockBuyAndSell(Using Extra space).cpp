#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int min_so_far[prices.size()];
    min_so_far[0]=prices[0];
    int ans=INT_MIN;
    for(int i=1;i<prices.size();i++)
    {
         min_so_far[i]=min(min_so_far[i-1],prices[i]);
    }
    for(int i=0;i<prices.size();i++)
    {
       ans=max(ans,prices[i]-min_so_far[i]);
    }
    return ans;
    
}
