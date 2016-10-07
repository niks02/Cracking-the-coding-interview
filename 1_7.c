#include<stdio.h>
int n,i,j,m;
void main()
{
    int matrix[m][n];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    make_0(matrix);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\n",matrix[i][j]);
        }
    }
}

void make_0(int matrix[][n])
{
    int row[m],column[n];
    for(i=0;i<m;i++)
        row[i]=0;
    for(j=0;j<n;j++)
        column[j]=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=1;
                column[j]=1;
            }
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((row[i]==1||column[j]==1))
            {
                matrix[i][j]=0;
            }
        }
    }
}
