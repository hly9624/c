#include <stdio.h>

size_t mystrlen(const char *s)
{
    int n = 0;
    while(*s++)
    {
        n++;
    }
    return n;
}

int main(int argc, const char *argv[])
{
    char str[] = "hello";
    int len;

    len = mystrlen(str);
    printf("len = %d\n",len);
    return 0;
}
