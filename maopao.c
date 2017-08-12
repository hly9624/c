#include <stdio.h>

int maopao(int a[],int n)
{
    int i,j,k;

    for(i = 0;i < n - 1;i++)
    {
        for(j = 0;j < n - i - 1;j++)
        {
            if(a[j] > a[j + 1])
            {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }
    
}
int main(int argc, const char *argv[])
{
    int a[8] = {3,6,8,4,2,5,7,1};
    int i;

    maopao(a,8);

    for(i = 0;i < 8;i++)
    {
        printf("%d ",a[i]);
    }    
    printf("\n");
    return 0;
}
