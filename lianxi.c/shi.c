#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b;

    printf("time: \n");
    scanf("%d:%d",&a,&b);
    if (a == 12)
    {
        printf("error!\n");
        return 1;
    }
    if(a < 12)
    {
        printf("%.2d:%.2dAM\n",a,b);
    }else if(a > 12 && a <= 24)
    {
        a -= 12;

        printf("%.2d:%.2dPM\n",a,b);
    }else
    {
        printf("error!\n");
        return 1;
    }
    return 0;
}
