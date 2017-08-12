#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a[6] = {'h','e','l','l','o','\0'};
    char b[6] = "hello";

    printf("%s\n",&a[1]);
    printf("%s\n",b);
    return 0;
}
