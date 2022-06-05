#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>pascalTriangle(n);
    
    for(int i=0;i<n;i++)
    {
        pascalTriangle[i].resize(i+1);
        pascalTriangle[i][0]=pascalTriangle[i][i]=1;
        
        for(int j=1;j<i;j++)
        {
            pascalTriangle[i][j]=pascalTriangle[i-1][j-1]+
                pascalTriangle[i-1][j];
        }
        
    }
    return pascalTriangle;
}
