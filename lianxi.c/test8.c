#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 5,b = 4;
    int *p,*q;

    p = &a;
    q = &b;

    printf("p = %d,q = %d\n",a,b);
    return 0;
}
