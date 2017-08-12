#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a;

    scanf("%d",&a);

    if(a < 0 || a > 100)
    {
        printf(" sorry,your score error!\n");
        return -1;
    }
    if(a >= 90)
    {
        printf("level : A\n");
    }
    else if(a >= 80)
    {
        printf("level : B\n");
    }
    else if(a >= 70)
    {
        printf("level : C\n");
    }
    else if(a >= 60)
    {
        printf("level : D\n");
    }
    else
    {
        printf("level : lose\n");
    }
    return 0;
}
