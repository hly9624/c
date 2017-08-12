#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {89,67,5,19,3,45,6,9};
    int i,j,k;

    for(i = 0;i < 8 - 1;i++)
    {
        for(j = i + 1;j < 8;j++)
        {
            if(a[i] > a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
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
