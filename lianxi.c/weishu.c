#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b,c;

    scanf("%d",&a);

    for(b = 1;a;b++)
    {
        a /=10;
        c = b;
    }    


        printf("c = %d\n",c);
    return 0;
}
