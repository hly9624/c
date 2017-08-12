#include <stdio.h>

char *mystrcpy(char *s1,const char *s2)
{
    char *p = s1;
    while(*s2 != '\0')
    {
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';

    return s1;
}
int main(int argc, const char *argv[])
{
    char str1[10];
    char str2[] = "hello";

    printf("%s\n",mystrcpy(str1,str2));
    return 0;
}
