#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
  unordered_map<int,int>mp;
    int ans;
    for(auto x:arr)
    { 
        mp[x]++;
        if(mp[x]>=2)
        {
            ans=x;
            break;
        }
    }
    return ans;
}
