#include <stdio.h>
#include <string.h>

char *mystrcat(char *s1,const char*s2)
{
    char *p = s1;
    p += strlen(p);
    while(*s2 != '\0')
    {
        *p = *s2;
        p++;
        s2++;
    }
    return s1;
}
int main(int argc, const char *argv[])
{
    char str1[20] = "hello";
    char str2[20] = "world";

    printf("%s\n",mystrcat(str1,str2));
    return 0;
}
