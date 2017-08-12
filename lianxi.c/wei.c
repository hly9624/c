#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b = 0;

    scanf("%d",&a);
    do
    {
        b++;
        a/=10;
    }
    while(a > 0);
        printf("%d\n",b);
    
    return 0;
}
