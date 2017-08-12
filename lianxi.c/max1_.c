#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {1,4,6,9,3,5,4,2};
    int max = 0;

    for(int i = 1;i < 8;i++)
    {
        if(a[max] < a[i])
        {
            max = i;
        }if(max == i)
        {
            printf("a[max]=%d%d\n",a[max],max);
        }
    }
    return 0;
}
