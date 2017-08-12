#include <stdio.h>

char *mystrcpy(char *s1,const char *s2)
{
    char *p = s1;
    while(*s1++ = *s2++);

    return p;
}
int main(int argc, const char *argv[])
{
    char str1[10];
    char str2[6] = "hello";

    printf("%s\n",mystrcpy(str1,str2));
    return 0;
}
