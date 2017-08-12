#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {3,5,1,8,2,6,4,7};
    int i,j,k,tmp;

    for(i = 0;i < 8 - 1;i++)
    {
        k = i;
        for(j = i + 1;j < 8;j++)
        {
            if(a[j] < a[k])
            {
                k = j;
            }
        }
        if(k != i)
        {
            tmp = a[i];
            a[i] = a[k];
            a[k] = tmp;
        }
    }
    for(i = 0;i < 8;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
