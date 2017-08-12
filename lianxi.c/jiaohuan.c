#include <stdio.h>

int jiaohuan(char *p)
{
    int i = 0;
    while(*p)
    {
        i = i * 10 + *p -'0';
        p++;
    }
    return (i);
}
int main(int argc, const char *argv[])
{
    int i;
    char a[] = "123456789";
    i = jiaohuan(a);
    printf("i = %d \n",i);
    return 0;
}
