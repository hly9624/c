#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b;

    for(a = 1;a < 10;a++)
    {
        for(b = 1;b < a + 1;b++)
        { 
            printf("%d*%d=%d\t",b,a,a*b);
        }
        printf("\n");
    }

    return 0;
}
