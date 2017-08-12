#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x;
    int a,b,c,d;

    scanf("%d",&x);

    a = x % 10;
    b = (x / 10) % 10;
    c = (x / 100) % 10;
    d = (x / 1000) % 10;

    printf("a = %d,b = %d,c = %d,d = %d\n",a,b,c,d);
    return 0;
}
