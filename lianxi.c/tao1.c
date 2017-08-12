#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 1;
    int sum = 1;

    for(a = 1;a <= 9;a++)
    {
        sum = (sum +1) *2;
    }
    printf("%d\n",sum);
    return 0;
}
