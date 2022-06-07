#include <bits/stdc++.h> 

vector<int> nextPermutation(vector<int> &permutation, int n)
{            //Traverse the array from back side and check if an element is smaller than it previous element
            // If you find it please break the loop 
             int i;
            for( i=n-1;i>=1;i--)
            {      
                    if(permutation[i-1]<permutation[i])
                    {
                      break;// Break the loop I found an element which is smaller than its previous
                    }
            }
            //sort the array in increasing order(Since it is sorted in decreasing order, so simply reversed it)
            reverse(permutation.begin()+i,permutation.end());
           if(i)
           { int j=upper_bound(permutation.begin()+i,permutation.end(),permutation[i-1])
               -permutation.begin();
            swap(permutation[i-1],permutation[j]);
           }
    return permutation;
}
