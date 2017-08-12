#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b,c;
    int *p1,*p2,*p3;

    scanf("%d,%d,%d",&a,&b,&c);
    p1 = &a;p2 = &b;p3 = &c;

    if(*p1 < *p2)
    {
        printf("%d,%d\n",*p1,*p2);
    }
    if(*p1 < *p3)
    {
        printf("%d,%d\n",*p1,*p3);
    }
    if(*p2 < *p3)
    {
        printf("%d,%d\n",*p2,*p3);
    }
    printf("%d,%d,%d\n",a,b,c);
    return 0;
}
