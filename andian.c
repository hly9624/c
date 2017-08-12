#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[3][4] = {{1,2,3,4},{5,4,3,2},{7,6,2,1}};
    int i,j;
    int n,m,k = 1;

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            printf("a[%d][%d]=",i,j);
        }
    
    }
    for(i = 0;i < 3;i++)
    {
        a[i][0] = n;
        a[0][i] = m;
        for(j = 0;j < 4;j++)
        {
            if(n < a[i][j])
            {
                n = a[i][j];
            }
            if(m > a[j][i])
            {
                m = a[j][i];
            }
        }
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            if(a[i][j] == n && a[i][j] == m)
            {
                printf("%d\n",a[i][j]);
            }else
            {
                k = 0;
            }
        }
    }
    if(k == 0)
    {
        printf("没有鞍点\n");
    }
    return 0;
}
