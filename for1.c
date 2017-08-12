#include <stdio.h>

int main(int argc, const char *argv[])
{
    int f = 0;

    for (int d = 1;d <= 500;d++)
    {
        f += d;
    }
    printf("%d\n",f);
    return 0;
}
