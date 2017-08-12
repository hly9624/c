#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int sum = 0;

    do
    {   sum += i;
        i++;
    }
    while(i <= 100);
    printf("%d\n",sum);
    return 0;
}
