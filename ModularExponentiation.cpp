#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    int ans=1;
    x=x % m;
    if(x==0)return 0;
 
    while(n>0)
 {   
   if(n%2==1){ans=(1LL*ans*(x)%m)%m;}    
        n=n/2;
        x=(1LL*(x)%m*1LL*(x)%m)%m;
       
 }
    return ans;
}
