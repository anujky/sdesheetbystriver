#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int j=0;
	for(int i=arr1.size()-n;i<arr1.size();i++)
    {
        arr1[i]=arr2[j++];
    }
    sort(arr1.begin(),arr1.end());
    return arr1;
}
