#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b;

    for(a = 1;a < 10;a++)
    {   
        for(b = 1;b <= a;b++ )
        {
            printf("%d * %d = %-2d ",b,a,a * b);
        }

        printf("\n");
    }
    
    return 0;
}
