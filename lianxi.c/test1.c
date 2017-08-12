#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a[12] = "hello world";
    char i;
    for(i = 0;i < 12;i++)
    {
        if(a[i] == 32)
        {
            a[i] = 95;
        }
        printf("%c ",a[i]);
    }
    printf("\n");
  //  printf("%s\n",a);
    return 0;
}
