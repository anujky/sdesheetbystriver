#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int>ans;
   
    long long sum=0,ssum=0;
    for(int x:arr){sum+=x; ssum+=(x*x);}
    long long summ=1LL*n*1LL*(n+1)/2;
    long long ssumm=1LL*n*1LL*(n+1)/2*1LL*(2*n+1)/3;
   long long r_m=sum-summ;
    long long r2_m2=ssum-ssumm;
    long long  rm=1LL*r2_m2/(1LL*r_m);
    long long  repeated=rm+r_m;
   long long missing=rm-r_m;
    ans.second=(int)(repeated/2);
    ans.first=(int)(missing/2);
    return ans;
    
}
