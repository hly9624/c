#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b,c;
    int max;

    printf("输入三个数字 \n");
    scanf("%d%d%d",&a,&b,&c);

    max = a;
    if(max < b)
    {
        max = b;
    }
    if(max < c)
    {
        max = c;
    }
        printf("%d\n",max);
    return 0;
}
