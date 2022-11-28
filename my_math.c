#include "my_math.h"
#include <stdio.h>
#define size 10

int mat[size][size];

int Min(int num1, int num2)
{
    return ((num1<num2)? num1 : num2) ;
}


void Shortest_Path_Algo()
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i!=j && mat[i][j]==0)
            {
                mat[i][j]=(__INT_MAX__);
            }
        }
    }

     for(int k = 0; k < 10; k++)
    {
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                int temp = 0;
                if(mat[i][k] == __INT_MAX__ || mat[k][j] == __INT_MAX__)
                {
                    temp = __INT_MAX__;
                }
                else
                {
                    temp = mat[i][k] + mat[k][j];
                }
                mat[i][j] = Min(mat[i][j], temp);
            }
        }
    }

    for(int i=0;i<size; i++)
    {
        for(int j=0;j<size;j++)
        {
            if(mat[i][j]>=(__INT_MAX__))
            {
                mat[i][j]=0;
            }
        }
    }
}

void A()
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    Shortest_Path_Algo();
}


void B(int i, int j)
{
    Shortest_Path_Algo();
   
    if(mat[i][j]==0)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
}


void C(int i, int j)
{
    Shortest_Path_Algo();
    if(mat[i][j]==0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n",mat[i][j]);   
    }
}
