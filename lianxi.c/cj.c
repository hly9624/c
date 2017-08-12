#include <stdio.h>

int main(int argc, const char *argv[])
{
    int sum = 0;

    int i,j,cheng;

    for(i = 1;i <= 10;i++)
    {
        cheng = 1;
        for(j = i;j > 0;j--)
        {
            cheng *= j;
        }
        sum += cheng;
    }
    printf("%d\n",sum);
    return 0;
}
