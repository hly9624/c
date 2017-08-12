#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a[12] = "hello world";
    char *p ="nihao chain";

    printf("*p = %c\n",*p);
    printf("*p = %c\n",*(p + 6));
    a[0] = 'H';

    p = a;

    printf("%s\n",a);
    printf("%s\n",p);
    return 0;
}
