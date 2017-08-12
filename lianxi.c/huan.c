#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a[20] = "hello world";
    int i = 0,j = 0;
    char tmp;

    while(a[j] != '\0')
        j++;
        j -= 1;
    printf("j = %d\n",j);
    while(i < j)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
    printf("%s\n",a);
    return 0;
}
