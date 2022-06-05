#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	
    //Make 1st row and 1st coloumn of matrix to store the status of each row and col except 1st.
    bool isFirstRowHasZero=false;
    bool isFirstColHasZero=false;
    //Traversing First row
    for(int i=0;i<matrix[0].size();i++)
    {
        if(matrix[0][i]==0)
        {
            isFirstRowHasZero=true;
            break;
        }
    }
    //Traversing First Coloumn
    for(int i=0;i<matrix.size();i++)
    {
        if(matrix[i][0]==0)
        {
            isFirstColHasZero=true;
            break;
        }
    }
    //Storing Zeros in 1st row and 1st coloumn if matrix[row][col]==0
    for(int i=matrix.size()-1;i>=1;i--)
    {
        for(int j=matrix[i].size()-1;j>=1;j--)
        {
            if(matrix[i][j]==0)
            {
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    //Upadting the values ac to 1st row and col
     for(int i=matrix.size()-1;i>=1;i--)
    {
        for(int j=matrix[i].size()-1;j>=1;j--)
        {
            if(matrix[i][0]==0 or matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
        }
    }
    //Updating the values is 1st row and 1st coloumn;
    if(isFirstRowHasZero)
    {
        for(int i=0;i<matrix[0].size();i++)matrix[0][i]=0;
    }
    
    if(isFirstColHasZero)
    {
        for(int i=0;i<matrix.size();i++)matrix[i][0]=0;
    }
    
}
