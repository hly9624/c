#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[2][3] = {{1,3,5},{4,6,0}};
    int mix,i,j;
    int n,m;
    mix = a[2][3];

    for(i = 1; i < 2;i++)
    {
        for(j = 1;j < 3;j++)
        {
            if(mix > a[i][j])
            {
                mix = a[i][j];
            }
            if(a[i][j] == mix)
            {
                n = i;
                m = j;
            }
        }
    }
    printf("a[%d][%d]=%d\n",n,m,mix);
    return 0;
}
