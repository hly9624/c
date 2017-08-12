#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char str1[] = "world";
    char str2[] = "world";

    printf("%d\n",strcmp(str1,str2));
    return 0;
}
