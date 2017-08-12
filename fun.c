#include <stdio.h>

int sum(int , int );

int sum(int a,int b)
{
    int c;
    c = a + b;
    return c;
}
int main(int argc, const char *argv[])
{
    int r;
   
    r = sum(1,2);

    printf("r = %d\n",r);

    return 0;
}
