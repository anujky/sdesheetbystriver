#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    vector<int>ans;
    int count1=1,count2=0;
        int element1=arr[0],element2=0;
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
    if(element1==arr[i])count1++;
    else if(element2==arr[i])count2++;
    else if(count1==0){element1=arr[i];count1=1;}
    else if(count2==0){element2=arr[i]; count2=1;}
    else {count1--;
          count2--;}  
    }     
    count1=0,count2=0;
     for(int i=0;i<n;i++)
     {
         if(arr[i]==element1)count1++;
         if(arr[i]==element2)count2++;
     }
      if(count1>floor(n/3))ans.push_back(element1);
      if(count2>floor(n/3))ans.push_back(element2);
       
       
         
    
    return ans;

}
