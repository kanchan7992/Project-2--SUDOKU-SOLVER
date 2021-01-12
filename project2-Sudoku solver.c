/*    SUDOKU SOLVER
*/

#include<stdlib.h>
#include<stdio.h>
#define n 9
void print(int a[n][n]) //to print the sudoku
{ int i,j;
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    printf("%d ",a[i][j]);
   }
 printf("\n");
  }
}

int issafe(int a[n][n], int row, int col, int num) // to check whether the no. is safe to place at a particular location or not
{ int i, j;
for(i=0;i<=8;i++)
if(a[row][i]==num)
return 0;


for(i=0;i<=8;i++)
 if(a[i][col]==num)
 return 0;


int rowstart=row - row%3, colstart = col - col%3;

for(i=rowstart;i<rowstart+3;i++)
  for(j=colstart;j<colstart+3;j++)
    if( a[i][j]==num)
     return 0;

return 1;
}

 int solveSudoku(int a[n][n],int row,int col) //keeps track of row and column
  {
  if(row==n-1 && col==n)
  {
    return 1;
  }

  if(col==n)
    {
     row++;
     col=0;
    }

  if(a[row][col]>0)
    return solveSudoku(a,row,col+1);

   for(int num=1;num<=n;num++)
   {
    if (issafe(a,row,col,num)==1)
     { a[row][col]=num;
         if (solveSudoku(a,row,col+1)==1)
           return 1;
     }
    a[row][col]=0;
   }
return 0;
}

int main()
{
    int grid[n][n] = { {3, 0, 6, 5, 0, 8, 4, 0, 0},
                       {5, 2, 0, 0, 0, 0, 0, 0, 0},
                       {0, 8, 7, 0, 0, 0, 0, 3, 1},
                       {0, 0, 3, 0, 1, 0, 0, 8, 0},
                       {9, 0, 0, 8, 6, 3, 0, 0, 5},
                       {0, 5, 0, 0, 9, 0, 6, 0, 0},
                       {1, 3, 0, 0, 0, 0, 2, 5, 0},
                       {0, 0, 0, 0, 0, 0, 0, 7, 4},
                       {0, 0, 5, 2, 0, 6, 3, 0, 0}
                       };

    if (solveSudoku(grid, 0, 0))
        print(grid);
    else
         printf("Invalid Sudoku");
     return 0;
}
