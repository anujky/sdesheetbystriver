#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
   long long ans=0;
    for(long long  i=0;i<n;i++)
    {
        for(long long  j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])ans++;
        }
    }
    return ans;
}
