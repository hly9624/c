#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[10] = {1,1};

    for (int j = 2;j < 10;j++)
    {
        a[j] = a[j - 1] + a[j - 2];
    }
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
