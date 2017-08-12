#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 1,b = 2;
    int* p,*q;

    p = &a;
    q = &b;



    *p = 10;

    printf("a = %d,b = %d\n",a,b);
    return 0;
}
