#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int sum = 1;
    i = 1;
    while (i <= 9)
    {
        sum = (sum +1)*2;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
