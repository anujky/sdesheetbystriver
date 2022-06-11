#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    int left=0,right=arr.size()-1;
    while(left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum==s)
        {
            if(arr[left]==arr[right])
            {
                int n=right-left+1;
                n=1LL*n*1LL*(n-1)/2;
                for(int i=0;i<n;i++)
                {
                    ans.push_back({arr[left],arr[right]});
                }
                break;
            }
           
            else
            {  int l=arr[left],r=arr[right];
             int m=0,n=0;
                while(l==arr[left]){n+=1;left+=1;}
             while(r==arr[right]){m+=1;right-=1;}
             for(int i=0;i<m*n;i++)
             {
                 ans.push_back({l,r});
             }
            }
        }
        else if(sum>s)right--;
        else left++;
    }
    return ans;
}
