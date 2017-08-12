#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int sum = 0;

    while (i <=200)
    {
        sum += i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
