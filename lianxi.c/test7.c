#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a[12] = "hello world";

    a[0] = 'H';

    char *p = "nihao chain";

    printf("*p = %c\n",*(p + 3));

   // p = a;

    printf("%s\n",a);
    printf("%s\n",p);
    return 0;
}
