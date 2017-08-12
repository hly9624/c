#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char str1[20] = "hello";
    char str2[20] = "world";

    printf("%s \n",strcat(str1,str2));
    return 0;
}
