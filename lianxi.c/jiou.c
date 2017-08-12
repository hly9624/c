#include <stdio.h>

int jiou(int a[],int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        if(a[i] % 2 != 0)
        {
            printf("%d ",a[i]);
        }
    }
    for(i = 0;i < n;i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}
int main(int argc, const char *argv[])
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    
    jiou(a,10);
    return 0;
}
