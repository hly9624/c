#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[3][4] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;

    printf("%d\n",a[2][3]);
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            printf("%d ",a[i][j]);
        }

        printf("\n");
    }    
    return 0;
}
