#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int row=0,col=0;
    int pre,cur;
    while(row<n and col<m )
    {   if(row+1==n or col+1==m)break;
        //Store the previous element or nextrow's element
        pre=mat[row+1][col];
     //Traversing 1st Row
        for(int i=col;i<m;i++)
        {  //Replacing cur to pre
           cur=mat[row][i];
            mat[row][i]=pre;
            pre=cur;
        }
        row++;
     //Traversing Last Coloumn
        for(int i=row;i<n;i++)
        {
            cur=mat[i][m-1];
            mat[i][m-1]=pre;
            pre=cur;
        }
        m--;
     //Traversing Last Row
      if(row<n) 
      {for(int i=m-1;i>=col;i--)
        {
            cur=mat[n-1][i];
            mat[n-1][i]=pre;
            pre=cur;
        }
       }
       n--;
     //Traversing 1st Coloumn
     if(col<m)
     { for(int i=n-1;i>=row;i--)
        {
            cur=mat[i][col];
            mat[i][col]=pre;
            pre=cur;
        }
     }
        col++;     
    }

}
