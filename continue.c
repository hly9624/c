#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;

    for (n = 100;n <= 200;n++)
    {
        if (n%3 == 0)
            continue;
        printf("%d\n",n);
    }
    return 0;
}
