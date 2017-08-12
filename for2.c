#include <stdio.h>

int main(int argc, const char *argv[])
{
    int h;
    int s = 0;

    for (;h <= 100;)
    {
        s += h;
        h++;
    }
    printf("%d\n",s);
    return 0;
}
