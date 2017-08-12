#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[3][4] = {{1,6,4,12},{2,5,8,19},{3,7,9,15}};
    int max,i,j;
    int n,m;
    max = a[0][0];
    for(i = 1;i < 3;i++)
    {
        for(j = 1;j < 4;j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
            }
            if(a[i][j] == max)
            {
                n = i;
                m = j;
            }
        }
        
    }
    printf("a[%d][%d]=%d\n",n,m,max);
    return 0;
}
