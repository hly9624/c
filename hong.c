#include <stdio.h>

#define one 1
#define two (1 + 1)
#define three (one + two)

int main(int argc, const char *argv[])
{
    printf("%d\n",one);
    printf("%d\n",two);
    printf("%d\n",three);
    printf("%d\n",three * two);
    return 0;
}
