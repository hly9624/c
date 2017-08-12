#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[5] = {1,2,3,4,5,};

    char b[6];

    a[3] = 200;
    
    printf ("%d\n",a[3]);
    
    printf ("%p\n",a);

    printf ("%ld\n",sizeof(a));

    for (int i = 0;i < 5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
