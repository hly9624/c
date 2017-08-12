#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a;

    scanf("%d",&a);

    if(a < 0 || a > 100)
    {
        printf("sorry!\n");
        return 1;
    }

    a /= 10;

    switch(a)
    {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("不及格\n");
    }

    return 0;
}
