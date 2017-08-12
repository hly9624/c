#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a;
    int sum;

    for (a = 1;a <= 100;a++)
    {
        sum += a;
        break;
    }    
    printf ("%d\n",sum);
    return 0;
}
