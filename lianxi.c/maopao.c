#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {3,6,1,5,8,4,2,7};
    int i,j,k;

    for(i = 0;i < 8 - 1;i++)
    {
        for(j = 0;j < 8 - i -1;j++)
        {
            if(a[j] > a[j + 1])
            {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }
    for(i = 0;i < 8;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
