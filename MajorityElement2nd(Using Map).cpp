#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    vector<int>ans;
    unordered_map<int,int>mp;
    for(int x:arr)mp[x]++;
    int n=arr.size();
    for(auto x:mp)
    {
        if(x.second>n/3)ans.push_back(x.first);
    }
    return ans;

}
