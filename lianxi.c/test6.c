#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a[5] = {'A','B','C','D'};

    char (*p3)[5] = &a;

    char (*p4)[5] = (char (*)[5])a;

    printf("a = %c\n",a[1]);
    printf("p3 = %c\n",**p3);
    printf("p4 = %c\n",**p4);
    printf("p3 + 1 = %c\n",**(p3 + 1));
    printf("p4 + 1 = %c\n",**(p4 + 1));
    return 0;
}
