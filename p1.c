#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[5] = {5,6,3,2,7};
    int *p = a;
    int i;

    printf("%d ",a[2]);
    printf("\n      \n");

    for(i = 0;i < 5;i++)
    {
        printf("%d ",a[i]);
    }
     printf("\n         \n");


    for(i = 0;i < 5;i++)
    {
        printf("%d ",p[i]);
    }
     printf("\n         \n");


    for(i = 0;i < 5;i++)
    {
        printf("%d ",*(p + i));
    }
     printf("\n         \n");

/*a是数组中的地址常量
    for(i = 0;i < 5;i++)
    {
        printf("%d ",*a++);
    }
     printf("\n         \n");
*/

    for(i = 0;i < 5;i++)
    {
        printf("%d ",*(a + i));
    }
    printf("\n         \n");

    //  *后+地址

    for (i = 0; i < 5;i++)
    {
        printf("%d ",*(&a[2]));
    }
    printf("\n      \n");

    for(i = 0;i < 5;i++)
    {
        printf("%d ",*p++);
    }
    printf("\n         \n");
    return 0;
}
