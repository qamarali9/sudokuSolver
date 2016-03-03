//QAB
#include<stdio.h>

int A[9][9];

int solveBrute(int row, int col)
{
    int k,fl,i,j;
    if(row > 8)
        return 1;
    while(row < 9 && A[row][col] != 0)
    {
        while(col < 9 && A[row][col] != 0)
            col++;
        if(col == 9)
        {
            col = 0;
            row++;
        }
    }
    if(row == 9)
        return 1;
    for(k = 1; k <= 9; k++)
    {
        fl = 1;
        for(i = 0;i < 9;i++)
            if(A[row][i] == k || A[i][col] == k)
            {
                fl = 0;
                break;
            }
        for(i = (row/3)*3;  i - 3 < (row/3)*3 && fl != 0; i++)
            for(j = (col/3)*3; j - 3 < (col/3)*3 && fl != 0; j++)
            {
                if(A[i][j] == k)
                {
                    fl = 0;
                    break;
                }
            }
        if(fl)
        {
            A[row][col] = k;
            if((col != 8) ?  solveBrute(row,col+1) : solveBrute(row+1, 0))
                return 1;
        }
    }
    A[row][col] = 0;
    return 0;
}

int main()
{
    int i,j;
    for(i = 0;i < 9;i++)
        for(j = 0; j < 9; j++)
        {
            scanf("%d",&A[i][j]);
        }
    if(solveBrute(0,0))
    {
        for(i = 0;i < 9;i++)
        {
            for(j = 0; j < 9; j++)
            {
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Not possible\n");
    return 0;
}
