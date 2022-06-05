
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	//Using Extra space
    vector<int>row(matrix.size(),1);
    vector<int>col(matrix[0].size(),1);
    //row and col will store the value 0 if it is found
    //in matrix that row or coloumn have value as zero
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=0;
                col[j]=0;
            }
        }
    }
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(row[i]==0 or col[j]==0)
            {
                matrix[i][j]=0;
            }
        }
    }
    
}
