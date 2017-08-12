#include <stdio.h>

int main(int argc, const char *argv[])
{
    char *a[5] = {"hello","hi","nihao","sawdika","how are you"};

    for(int i = 0;i < 5;i++)
    {
        printf("%s\n",a[i]);
    }

    printf("%c\n",a[3][3]);
    return 0;
}
