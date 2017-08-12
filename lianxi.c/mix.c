#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b,c;
    int mix;

    printf("输入三个数字 \n");
    scanf("%d%d%d",&a,&b,&c);

    mix = a;
    if(mix > b)
    {
        mix = b;
    }
    if(mix > c)
    {
        mix = c;
    }
    printf("%d\n",mix);
    return 0;
}
