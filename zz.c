#include <stdio.h>

int main(int argc, const char *argv[])
{
    char *a[4] = {"follow me","basic","great wall","computer"};
    char **p;
    int i;

    for(i = 0;i < 4;i++)
    {
        p = a + i;
        printf("%s\n",*p);
    }
    return 0;
}
