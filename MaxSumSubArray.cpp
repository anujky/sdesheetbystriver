#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long ans=0;OverAllmax
    long long cm=0;//CurrentMax
    for(int i=0;i<n;i++)
    {   cm=max(1LL*arr[i],1LL*arr[i]+cm);
        ans=max(ans,cm);
    }
    return max(cm,ans);
}
