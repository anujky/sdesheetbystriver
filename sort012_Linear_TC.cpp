#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //  Dutch Flag Algorithm (which have three color)
    int left=0,right=n-1;
    int i=0;
   while(i<=right)
   {
       if(arr[i]==0)
       {
           swap(arr[i],arr[left]);
           i+=1;
           left+=1;
       }
       else if(arr[i]==2)
       {
           swap(arr[i],arr[right]);
           right-=1;
       }
       else i+=1;
   }
       
}
