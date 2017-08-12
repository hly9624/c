#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {7,4,5,2,8,6,1,3};
    int j,i;
    int n;

    j = a[8];
    for(i = 0;i < 8;i++)
    {
        if(j > a[i])
        {
            j = i;
        }
        if(a[i] == j)
        {
           n = i;
        }
        
    }
    printf("a[%d]=%d\n",n,j);
    return 0;
}
