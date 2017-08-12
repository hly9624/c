#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a;
    int sun = 0;

    for (a = 1;a <= 200;a++)
    {
        sun += a;
    }

    printf("%d\n",a);
    printf("%d\n",sun);
    return 0;
}
