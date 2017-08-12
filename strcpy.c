#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char str1[] = "hello world";
    char str2[20];
    
    printf("%s\n",strcpy(str2,str1));
    return 0;
}
