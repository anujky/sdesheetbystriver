#include <bits/stdc++.h> 
long long merge(long long *arr,long long start,long long mid,long long  end)
{  long long n1=mid-start+1;
   long long  n2=end-mid;
   
    long long left[n1],right[n2];
 for(long long i=0;i<n1;i++)
 {
   left[i]=arr[start+i];  
 }
  for(long long j=0;j<n2;j++)
 {
   right[j]=arr[mid+1+j];  
 }
 long long  count=0;
 long long i=0,j=0,k=start;
 while(i<n1 and j<n2)
 {
     if(left[i]<=right[j]){arr[k++]=left[i++];}
     else
     {
         arr[k++]=right[j++];
             count+=n1-i;
     }
     
 }
 while(i<n1)arr[k++]=left[i++];
 while(j<n2)arr[k++]=right[j++];
 return count;
 
}
long long inversionCount(long long *arr,long long  start,long long end)
{   long long cnt=0;
    if(start<end)
    {
        long long  mid=start+(end-start)/2;
        cnt+=inversionCount(arr,start,mid);
        cnt+=inversionCount(arr,mid+1,end);
        cnt+=merge(arr,start,mid,end);
    }
 return cnt;
}
long long getInversions(long long *arr, int n){
  
    return inversionCount(arr,0,n-1);
    
}
