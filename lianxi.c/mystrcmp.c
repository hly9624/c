#include <stdio.h>

int strcmp(const char *s1,const char *s2)
{
    while((*s1 != '\0') && (*s2 != '\0'))
    {
        if(*s1 > *s2)
            return 1;
        else if(*s1 < *s2)
            return -1;
        s1++;
        s2++;
    }
    if((*s1 == '\0') && (*s2 == '\0'))
        return 0;
    if((*s1 == '\0') && (*s2 == '\0'))
        return -1;
    if((*s1 != '\0') && (*s2 == '\0'))
        return 1;
}

int main(int argc, const char *argv[])
{
    char str1[] = "world";
    char str2[] = "world";

    printf("%d\n",strcmp(str1,str2));
    return 0;
}
