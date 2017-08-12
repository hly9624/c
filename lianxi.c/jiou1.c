#include <stdio.h>

int jiou(int *a,int n)
{
    int i,j,tmp;

    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(a[i] % 2 != 0 && a[j] % 2 == 0)
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(i = 0;i < n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
int main(int argc, const char *argv[])
{
    int a[11] = {1,2,3,4,5,6,7,8,9,10,12};
    int i,j,k;

    jiou(a,11);
}
